#include "mainsimulacion.h"
#include "math.h"
#include <iostream>
using namespace std;


MainSimulacion::MainSimulacion()
{
}

MainSimulacion::~MainSimulacion()
{
}


void MainSimulacion::inicializar(int cantidadAscensores, int tiempoArranque,
                                 int cantidadPisos, int capacidadMax, int tiempoDesplazamiento,
                                 int tEntradaAscensorPersona, int tSalidaAscensorPersona,
                                 int cantidadSimulaciones, int tiempoSimulacion){
  capacidadOc=0;
  pActualAscensor=0;
  reloj=0;
  subiendo=true;
  this->cantidadPisos= cantidadPisos;
  capacidadOcGlobal=0;


  atendidos=0;
  colaAdentro.clear();
  colaAfueraArriba.clear();
  colaAfueraAbajo.clear();
  tamanoCola=0;
  iniColaAcum=0;
  colaMaxima=0;
  llegadasPorPiso.clear();
  for (int i = 0; i < cantidadPisos; ++i) {
      colaAdentro.push_back(0);
      colaAfueraAbajo.push_back(0);
      colaAfueraArriba.push_back(0);

      llegadasPorPiso.push_back(0);
  }

  this->cantidadAscensores=cantidadAscensores;
  this->tEntradaAscensorPersona=tEntradaAscensorPersona;
  this->tSalidaAscensorPersona=tSalidaAscensorPersona;
  this->tiempoArranque = tiempoArranque;
  this->capacidadMax = capacidadMax;
  this->tiempoDesplazamiento = tiempoDesplazamiento;
  this->cantidadSimulaciones = cantidadSimulaciones;
  this->tiempoSimulacion = tiempoSimulacion*3600;
  Evento llegadaCero;
  llegadaCero.setTiempo(0);
  llegadaCero.setTipoEvento(0);
  this->lef.agregarEvento(llegadaCero);
  tiemposEspera.clear();


  //Temporales
  totalQueLlegan =0;

}


void MainSimulacion::iniciarSimulacion(int cantidadAscensores, int tiempoArranque,
                                       int cantidadPisos, int capacidadMax, int tiempoDesplazamiento,
                                       int tEntradaAscensorPersona, int tSalidaAscensorPersona,
                                       int cantidadSimulaciones, int tiempoSimulacion){
    QVector <double> tiemposPromedioEspera;
    for (int i = 0; i < cantidadSimulaciones; ++i) {
        int contador = 0;
        inicializar(cantidadAscensores, tiempoArranque, cantidadPisos,
                    capacidadMax,tiempoDesplazamiento, tEntradaAscensorPersona,
                    tSalidaAscensorPersona, cantidadSimulaciones, tiempoSimulacion);
        Evento tempEvent;
        while(reloj <= this->tiempoSimulacion)
        {
            tempEvent =lef.quitarEvento();
            reloj= tempEvent.getTiempo();
            //Evento evento = lef.sacar();
            switch(tempEvent.getTipoEvento())
            {
            case 0:   //0 = LPP
                llegadaPersonaPiso();
                break;
            case 1:   // 1 =EPA
                entradaPersonaAscensor(tempEvent.getTiempollegada());
                break;
            case 2:   // 2 =CPA
                cambioPisoAscensor(tempEvent.getTiempollegada());
                break;
            }
            contador++;
        }


        //variable de desempenio atendidos por simulacion
        atendidosPorSimulacion.push_back(atendidos);
       //variable de desempenio valor esperado de cola por simulacion
        valorEsperadoColas.push_back(tamanoCola/(double)reloj);
        //variable de desempenio capacidad ocupada ascensor por simulacion
        capacidadPromedioOcupada.push_back(capacidadOcGlobal/(double)reloj);
       //variable de desempenio tiempo promedio de espera
        tiemposEsperaGeneral.push_back(auxiliar.promedio(tiemposEspera));

    }




   //variable de desempenio atendidos

    agregarDatosVarDesem(atendidosPorSimulacion);

    //variable de desempenio valor esperado cola general

    agregarDatosVarDesem(valorEsperadoColas);


     //variable de desempenio capacidad ocupada ascensor

    agregarDatosVarDesem(capacidadPromedioOcupada);

    //variable de desempenio tiempo promedio de espera

   agregarDatosVarDesem(tiemposEsperaGeneral);






    int hola;

}


void MainSimulacion::llegadaPersonaPiso()
{

    //1. Calcular piso Actual Persona
    int pisoActualPersona=auxiliar.calcularPisoAleatorioPersona(this->cantidadPisos);

    // 1.Generar llegada persona piso
    Evento eventoLPP;
    int tiempoEntreLlegadas= auxiliar.tiempoEntreLLegadas(pisoActualPersona);
    eventoLPP.setTipoEvento(0);
    eventoLPP.setTiempo(reloj + tiempoEntreLlegadas);
    eventoLPP.setNombreEvento("LPP");
    lef.agregarEvento(eventoLPP);

    //Decidir a que direccion debo ir
    int decision = auxiliar.generarAleatorioRango(0,1);
    if((pisoActualPersona == 0 || decision == 1) && pisoActualPersona != this->cantidadPisos-1){
        //3.1 ColaAfuera[PisoActualPersona]++
        this->colaAfueraArriba.replace(pisoActualPersona,
                                          this->colaAfueraArriba.at(pisoActualPersona)+1);
    }else{
        //3.2 ColaAfuera[PisoActualPersona]++
        this->colaAfueraAbajo.replace(pisoActualPersona,
                                      this->colaAfueraAbajo.at(pisoActualPersona)+1);
    }

    //Variables de desempenio relacionadas con la cola
    colaAcum();



    //Cola Maxima
    calcularColaMax();

    this->llegadasPorPiso.replace(pisoActualPersona,
                                  llegadasPorPiso.at(pisoActualPersona)+1);
    totalQueLlegan++;

    //4. Generar entrada persona Ascensor
    Evento eventoEPA;
    eventoEPA.setTipoEvento(1);
    eventoEPA.setTiempo(this->reloj);
    eventoEPA.setNombreEvento("EPA");
    eventoEPA.setTiempoLlegada(reloj);
    lef.agregarEvento(eventoEPA);
}


void MainSimulacion::entradaPersonaAscensor(int tiempoLlegada){
    int pisoDestinoPersona;
    if(this->pActualAscensor == 0){
        subiendo = true;
    }else if (this->pActualAscensor == this->cantidadPisos-1) {
        subiendo = false;
    }
    if(subiendo){

        if((this->capacidadOc==this->capacidadMax)
                ||(colaAfueraArriba.at(this->pActualAscensor)== 0))
        {

            //1.1 piso destino ascensor
           // metodo que quenera el piso del destino del ascensor
            bool ascensorLleno = (this->capacidadOc == this->capacidadMax);
            this->pDestinoAscensor=auxiliar.calcularPisoDestinoAscensor(colaAfueraArriba,
                               this->colaAdentro, this->pActualAscensor, this->subiendo,
                               this->cantidadPisos, ascensorLleno);
            if(this->pDestinoAscensor == this->pActualAscensor){
                this->pDestinoAscensor=auxiliar.calcularPisoDestinoAscensor(colaAfueraAbajo,
                                   this->colaAdentro, this->pActualAscensor, this->subiendo,
                                   this->cantidadPisos, ascensorLleno);
            }

           if(this->pDestinoAscensor < this->pActualAscensor){
               subiendo = false;
           }else if(this->pDestinoAscensor > this->pActualAscensor){
               subiendo = true;
           }
            //2.1 Generar Cambio Piso Ascensor
           Evento eventoCPA;
           eventoCPA.setTipoEvento(2);
           eventoCPA.setNombreEvento("CPA");
           eventoCPA.setTiempoLlegada(tiempoLlegada);

           //Variable de Desempenio tiempoEsperaAcum

           eventoCPA.setTiempo(this->reloj
                               +this->colaAdentro.at(this->pActualAscensor)*(this->tSalidaAscensorPersona));

           lef.agregarEvento(eventoCPA);
        }

        else
        {
            //1.2  ColaAfuera[PisoActualAscensor]--
            colaAcum();
            colaAfueraArriba.replace(this->pActualAscensor,
                                              colaAfueraArriba.at(this->pActualAscensor)-1);

            //2.2 Piso Destino Persona
            do{
                pisoDestinoPersona=auxiliar.generarAleatorioRango(this->pActualAscensor, this->cantidadPisos-1);
            }while (pisoDestinoPersona == this->pActualAscensor);


            //3.2 ColaAscensor[PisoDestinoPersona]++

            this->colaAdentro.replace(pisoDestinoPersona,
                                               this->colaAdentro.at(pisoDestinoPersona) + 1);

            //4.2 capacidadOcupada++

            this->capacidadOc++;
            //Variable desempenio espera
            tiemposEspera.push_back(reloj-tiempoLlegada);


            //variable de desempenio capacidad ocupada promedio
            capacidadOcAcum();


            //5.2 Generar entrada persona ascensor
           /* Evento eventoEPA;
            eventoEPA.setTipoEvento(1);
            eventoEPA.setTiempo(this->reloj);
            eventoEPA.setNombreEvento("EPA");
            lef.agregarEvento(eventoEPA);*/


        }
    }else{

        if((this->capacidadOc==this->capacidadMax)
                ||(colaAfueraAbajo.at(this->pActualAscensor)== 0))
        {

            //1.1 piso destino ascensor
           // metodo que quenera el piso del destino del ascensor

            bool ascensorLleno = (this->capacidadOc == this->capacidadMax);
            this->pDestinoAscensor=auxiliar.calcularPisoDestinoAscensor(colaAfueraAbajo,
                               this->colaAdentro, this->pActualAscensor, this->subiendo,
                               this->cantidadPisos, ascensorLleno);
            if(this->pDestinoAscensor == this->pActualAscensor){
                this->pDestinoAscensor=auxiliar.calcularPisoDestinoAscensor(colaAfueraArriba,
                                   this->colaAdentro, this->pActualAscensor, this->subiendo,
                                   this->cantidadPisos, ascensorLleno);
            }

           if(this->pDestinoAscensor < this->pActualAscensor){
               subiendo = false;
           }else if(this->pDestinoAscensor > this->pActualAscensor){
               subiendo = true;
           }
            //2.1 Generar Cambio Piso Ascensor
           Evento eventoCPA;
           eventoCPA.setTipoEvento(2);
           eventoCPA.setNombreEvento("CPA");
           eventoCPA.setTiempoLlegada(tiempoLlegada);

           //Variable de Desempenio tiempoEsperaAcum

           eventoCPA.setTiempo(this->reloj
                               +this->colaAdentro.at(this->pActualAscensor)*(this->tSalidaAscensorPersona));

           lef.agregarEvento(eventoCPA);
        }

        else
        {
            //1.2  ColaAfuera[PisoActualAscensor]--
            colaAcum();
            colaAfueraAbajo.replace(this->pActualAscensor,
                                              colaAfueraAbajo.at(this->pActualAscensor)-1);

            //2.2 Piso Destino Persona
            do{
                pisoDestinoPersona=auxiliar.calcularPisoAleatorioPersona(this->pActualAscensor);
            }while (pisoDestinoPersona == this->pActualAscensor);


            //3.2 ColaAscensor[PisoDestinoPersona]++

            this->colaAdentro.replace(pisoDestinoPersona,
                                               this->colaAdentro.at(pisoDestinoPersona) + 1);

            //4.2 capacidadOcupada++

            this->capacidadOc++;

            //Variable desempenio espera
            tiemposEspera.push_back(reloj-tiempoLlegada);

            //variable de desempenio capacidad ocupada promedio
            capacidadOcAcum();


            //5.2 Generar entrada persona ascensor
            /*Evento eventoEPA;
            eventoEPA.setTipoEvento(1);
            eventoEPA.setTiempo(this->reloj);
            eventoEPA.setNombreEvento("EPA");
            lef.agregarEvento(eventoEPA);*/


        }
    }

}



void MainSimulacion::cambioPisoAscensor(int tiempoLlegada)
{


    int cantidadPisosARecorrer = abs(this->pActualAscensor - this->pDestinoAscensor);
    //1. pisoActualAscensor = pisoDestinoAscensor
    this->pActualAscensor=this->pDestinoAscensor;

    if(this->colaAdentro.at(this->pActualAscensor)==0)
    {
        //2. Generar entrada persona ascensor
        Evento eventoEPA;
        eventoEPA.setTipoEvento(1);
        eventoEPA.setTiempo(this->reloj
                            + this->tiempoArranque
                            + cantidadPisosARecorrer*this->tiempoDesplazamiento);
        eventoEPA.setNombreEvento("EPA");
        eventoEPA.setTiempoLlegada(tiempoLlegada);
        lef.agregarEvento(eventoEPA);


    }

    else
    {
        int tamColaAdentro = colaAdentro.at(this->pActualAscensor);
        //3. atendidos ++; // variables de desempeño


        atendidos += tamColaAdentro;
        //4. ColaAscensor[PisoActual]
        this->colaAdentro.replace(this->pActualAscensor, 0);
        //5. capacidad ocupada--
        this->capacidadOc-=tamColaAdentro;

        //variable de desempenio capacidad ocupada promedio
        capacidadOcAcum();

    }
}

void MainSimulacion::colaAcum(){
    tamanoCola+=(reloj-iniColaAcum)*(sumarColas());
    iniColaAcum=reloj;
}



void MainSimulacion::calcularColaMax(){

    int tamCola=sumarColas();

    if(tamCola > colaMaxima){
        colaMaxima=tamCola;
    }
}

void MainSimulacion::capacidadOcAcum(){

    capacidadOcGlobal+=(reloj-iniCapacidadOcuAcum)*(capacidadOc);
    iniCapacidadOcuAcum=reloj;
}


int MainSimulacion::sumarColas(){

    int acum=0;
    for (int i = 0; i < cantidadPisos; ++i) {

        acum+=colaAfueraArriba.at(i) + colaAfueraAbajo.at(i);

    }
    return acum;
}

void MainSimulacion::agregarDatosVarDesem(QVector<double> valoresDesem){


    double promedioTemp;
    double desviacionTemp;

    //variable de desempenio atendidos

    promedioTemp=auxiliar.promedio(valoresDesem);
    desviacionTemp=auxiliar.desviacionEstandar(valoresDesem,promedioTemp);

     variablesDesempenio.push_back(promedioTemp);
     variablesDesempenio.push_back(desviacionTemp);
     variablesDesempenio.push_back(auxiliar.intervaloConfianzaInferior(promedioTemp,
                                                                       cantidadSimulaciones,
                                                                       desviacionTemp));
     variablesDesempenio.push_back(auxiliar.intervaloConfianzaSuperior(promedioTemp,
                                                                       cantidadSimulaciones,
                                                                       desviacionTemp));

}






