#include "controladoreventos.h"
#include "lef.h"
#include "mainsimulacion.h"




ControladorEventos::ControladorEventos()
{


}

ControladorEventos::~ControladorEventos()
{


}

void ControladorEventos::llegadaPersonaPiso()
{


    Lef lef;
    MainSimulacion main;

    // 1.Generar llegada persona piso
    Evento eventoLPP;

    int tiempoEntreLlegadas=0; //tiempo entre llegadas se genera aleatoriamente

    eventoLPP.setTipoEvento("LPP");
    eventoLPP.setTiempo(tiempoEntreLlegadas);

    lef.agregarEvento(eventoLPP);


    //2. Calcular piso Actual Persona
    int pisoActualPersona=0;//Metodo que calcula piso actual

    //3. ColaAfuera[PisoActualPersona]++
    main.colaAfuera.replace(pisoActualPersona, main.colaAfuera.at(pisoActualPersona)++);

    //4. Generar entrada persona Ascensor
    Evento eventoEPA;

    eventoEPA.setTipoEvento("EPA");
    eventoEPA.setTiempo(main.reloj);

    lef.agregarEvento(eventoEPA);

}

void Evento::entradaPersonaAscensor()
{


    MainSimulacion mainSimulacion;


    if((mainSimulacion.capacidadOc==mainSimulacion.capacidadMax)
            ||(mainSimulacion.colaAfuera.at(mainSimulacion.pActualAscensor)== 0))
    {

        //1.1 piso destino ascensor

       mainSimulacion.pDestinoAscensor=0; // metodo que quenera el piso del destino del ascensor

       //2.1 Generar Cambio Piso Ascensor

       Evento eventoCPA;

       eventoCPA.setTipoEvento("CPA");
       eventoCPA.setTiempo(mainSimulacion.reloj
                           +((mainSimulacion.colaAdentro.at(mainSimulacion.pActualAscensor))*(mainSimulacion.tSalidaAscensorPersona))
                           +((mainSimulacion.colaAfuera.at(mainSimulacion.pActualAscensor))*(mainSimulacion.tEntradaAscensorPersona)));

       lef.agregarEvento(eventoEPA);


    }

    else
    {

        //1.2  ColaAfuera[PisoActualAscensor]--

        mainSimulacion.colaAfuera.replace(mainSimulacion.pActualAscensor, mainSimulacion.colaAfuera.at(mainSimulacion.pActualAscensor)--);

        //2.2 Piso Destino Persona

        int pisoDestinoPersona=0;//Metodo que calcula piso destino persona

        //3.2 ColaAscensor[PisoDestinoPersona]++

        mainSimulacion.colaAdentro.at(pisoDestinoPersona, mainSimulacion.colaAdentro.at(pisoDestinoPersona));

        //4.2 capacidadOcupada++

        mainSimulacion.capacidadOc++;

        //5.2 Generar entrada persona ascensor

        Evento eventoEPA;

        eventoEPA.setTipoEvento("EPA");
        eventoEPA.setTiempo(main.reloj);

        lef.agregarEvento(eventoEPA);

    }
}

void Evento::cambioPisoAscensor()
{
    MainSimulacion mainSimulacion;

    //1. pisoActualAscensor = pisoDestinoAscensor


    mainSimulacion.pActualAscensor=mainSimulacion.pDestinoAscensor;



    llamarLista.pActualAscensor=llamarLista.pDestinoAscensor;



    if(mainSimulacion.colaAdentro.at(mainSimulacion.pActualAscensor)==0)
    {
        //2. Generar entrada persona ascensor

        Evento eventoEPA;

        eventoEPA.setTipoEvento("EPA");
        eventoEPA.setTiempo(main.reloj);

        lef.agregarEvento(eventoEPA);
    }

    else
    {

        //3. atendidos ++; // variables de desempeño

        int atendidos=0;

        atendidos ++;

        //4. ColaAscensor[PisoActual]--

        mainSimulacion.colaAdentro.at(mainSimulacion.pActualAscensor, mainSimulacion.colaAdentro.at(mainSimulacion.pActualAscensor)++);

        //5. capacidad ocupada--

        mainSimulacion.capacidadOc--;



        //llamarLista.colaAdentro.at(llamarLista.pActualAscensor).replace(llamarLista.colaAdentro.at(pActualAscensor)-1);;

        //llamarLista.capacidadOcupada --;
    }
}
