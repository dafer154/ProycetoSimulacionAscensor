#include "mainsimulacion.h"


MainSimulacion::MainSimulacion()
{
}

MainSimulacion::~MainSimulacion()
{
}


void MainSimulacion::inicializar(int cantidadAscensores, int tiempoArranque,
                                 int cantidadPisos, int capacidadMax, int tiempoDesplazamiento,
                                 int tEntradaAscensorPersona, int tSalidaAscensorPersona, int cantidadSimulaciones){
  capacidadOc=0;
  pActualAscensor=0;
  reloj=0;
  subiendo=true;
  this->cantidadPisos= cantidadPisos;
  colaAdentro;
  colaAfuera;

  for (int i = 0; i < cantidadPisos; ++i) {
      colaAdentro.push_back(0);
      colaAfuera.push_back(0);
  }

  this->cantidadAscensores=cantidadAscensores;
  this->tEntradaAscensorPersona=tEntradaAscensorPersona;
  this->tSalidaAscensorPersona=tSalidaAscensorPersona;
  this->tiempoArranque = tiempoArranque;
  this->capacidadMax = capacidadMax;
  this->tiempoDesplazamiento = tiempoDesplazamiento;
  this->cantidadSimulaciones = cantidadSimulaciones;
  Evento llegadaCero;
  llegadaCero.setTiempo(0);
  llegadaCero.setTipoEvento(0);
  this->lef.agregarEvento(llegadaCero);

}


void MainSimulacion::iniciarSimulacion(){
    int contador = 0;
    Evento tempEvent;
    while(!lef.LEF.size()==0 || contador <= cantidadSimulaciones)
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
            entradaPersonaAscensor();
            break;
        case 2:   // 2 =CPA
            cambioPisoAscensor();
            break;
        }
        contador++;

    }
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



    //3. ColaAfuera[PisoActualPersona]++
    this->colaAfuera.replace(pisoActualPersona,
                                      this->colaAfuera.at(pisoActualPersona)+1);

    //4. Generar entrada persona Ascensor
    Evento eventoEPA;
    eventoEPA.setTipoEvento(1);
    eventoEPA.setTiempo(this->reloj);
    eventoEPA.setNombreEvento("EPA");
    lef.agregarEvento(eventoEPA);
}


void MainSimulacion::entradaPersonaAscensor()
{
    if((this->capacidadOc==this->capacidadMax)
            ||(this->colaAfuera.at(this->pActualAscensor)== 0))
    {

        //1.1 piso destino ascensor
       // metodo que quenera el piso del destino del ascensor
        if(this->pActualAscensor == 0){
            subiendo = true;
        }else if (this->pActualAscensor == this->cantidadPisos-1) {
            subiendo = false;
        }
        bool ascensorLleno = (this->capacidadOc == this->capacidadMax);
        this->pDestinoAscensor=auxiliar.calcularPisoDestinoAscensor(this->colaAfuera,
                           this->colaAdentro, this->pActualAscensor, this->subiendo,
                           this->cantidadPisos, ascensorLleno);

       if(this->pDestinoAscensor < this->pActualAscensor){
           subiendo = false;
       }else if(this->pDestinoAscensor > this->pActualAscensor){
           subiendo = true;
       }
        //2.1 Generar Cambio Piso Ascensor
       Evento eventoCPA;
       eventoCPA.setTipoEvento(2);
       eventoCPA.setNombreEvento("CPA");
       eventoCPA.setTiempo(this->reloj
                           +((this->colaAdentro.at(this->pActualAscensor))*(this->tSalidaAscensorPersona))
                           +((this->colaAfuera.at(this->pActualAscensor))*(this->tEntradaAscensorPersona)));

       lef.agregarEvento(eventoCPA);
    }

    else
    {
        //1.2  ColaAfuera[PisoActualAscensor]--
        this->colaAfuera.replace(this->pActualAscensor,
                                          this->colaAfuera.at(this->pActualAscensor)-1);

        //2.2 Piso Destino Persona
        int pisoDestinoPersona=auxiliar.calcularPisoAleatorioPersona(this->cantidadPisos);
        while (pisoDestinoPersona == this->pActualAscensor) {
            pisoDestinoPersona=auxiliar.calcularPisoAleatorioPersona(this->cantidadPisos);
        }


        //3.2 ColaAscensor[PisoDestinoPersona]++

        this->colaAdentro.replace(pisoDestinoPersona,
                                           this->colaAdentro.at(pisoDestinoPersona) + 1);

        //4.2 capacidadOcupada++

        this->capacidadOc++;

        //5.2 Generar entrada persona ascensor
        Evento eventoEPA;
        eventoEPA.setTipoEvento(1);
        eventoEPA.setTiempo(this->reloj);
        eventoEPA.setNombreEvento("EPA");
        lef.agregarEvento(eventoEPA);

    }
}

void MainSimulacion::cambioPisoAscensor()
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

    }
}

