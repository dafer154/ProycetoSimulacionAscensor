#include "controladoreventos.h"
#include "lef.h"
#include "mainsimulacion.h"
#include "metodosauxiliares.h"
#include "aleatorios.h"




ControladorEventos::ControladorEventos()
{


}

ControladorEventos::~ControladorEventos()
{


}

void ControladorEventos::llegadaPersonaPiso()
{



    //1. Calcular piso Actual Persona

    int pisoActualPersona=auxiliar.calcularPisoAleatorioPersona();



    // 1.Generar llegada persona piso
    Evento eventoLPP;


    int tiempoEntreLlegadas= auxiliar.tiempoEntreLLegadas(pisoActualPersona);


    eventoLPP.setTipoEvento(0);
    eventoLPP.setTiempo(tiempoEntreLlegadas);

    lef.agregarEvento(eventoLPP);


    //3. ColaAfuera[PisoActualPersona]++

    mainSimulacion.colaAfuera.replace(pisoActualPersona,
                                      mainSimulacion.colaAfuera.at(pisoActualPersona)+1);

    //4. Generar entrada persona Ascensor
    Evento eventoEPA;

    eventoEPA.setTipoEvento(1);
    eventoEPA.setTiempo(mainSimulacion.reloj);

    lef.agregarEvento(eventoEPA);


}

void ControladorEventos::entradaPersonaAscensor()
{
    if((mainSimulacion.capacidadOc==mainSimulacion.capacidadMax)
            ||(mainSimulacion.colaAfuera.at(mainSimulacion.pActualAscensor)== 0))
    {

        //1.1 piso destino ascensor
       // metodo que quenera el piso del destino del ascensor
        mainSimulacion.pDestinoAscensor=auxiliar.calcularPisoDestinoAscensor(mainSimulacion.colaAfuera,
                           mainSimulacion.colaAdentro, mainSimulacion.pActualAscensor, mainSimulacion.subiendo);

       //2.1 Generar Cambio Piso Ascensor
       Evento eventoCPA;
       eventoCPA.setTipoEvento(2);
       eventoCPA.setTiempo(mainSimulacion.reloj
                           +((mainSimulacion.colaAdentro.at(mainSimulacion.pActualAscensor))*(mainSimulacion.tSalidaAscensorPersona))
                           +((mainSimulacion.colaAfuera.at(mainSimulacion.pActualAscensor))*(mainSimulacion.tEntradaAscensorPersona)));

       lef.agregarEvento(eventoCPA);
    }

    else
    {
        //1.2  ColaAfuera[PisoActualAscensor]--
        mainSimulacion.colaAfuera.replace(mainSimulacion.pActualAscensor,
                                          mainSimulacion.colaAfuera.at(mainSimulacion.pActualAscensor)-1);

        //2.2 Piso Destino Persona
        int pisoDestinoPersona=auxiliar.calcularPisoAleatorioPersona();


        //3.2 ColaAscensor[PisoDestinoPersona]++

        mainSimulacion.colaAdentro.replace(pisoDestinoPersona,
                                           mainSimulacion.colaAdentro.at(pisoDestinoPersona) + 1);

        //4.2 capacidadOcupada++

        mainSimulacion.capacidadOc++;

        //5.2 Generar entrada persona ascensor
        Evento eventoEPA;
        eventoEPA.setTipoEvento(1);
        eventoEPA.setTiempo(mainSimulacion.reloj);
        lef.agregarEvento(eventoEPA);

    }
}

void ControladorEventos::cambioPisoAscensor()
{

    //1. pisoActualAscensor = pisoDestinoAscensor
    mainSimulacion.pActualAscensor=mainSimulacion.pDestinoAscensor;


    if(mainSimulacion.colaAdentro.at(mainSimulacion.pActualAscensor)==0)
    {
        //2. Generar entrada persona ascensor

        Evento eventoEPA;

        eventoEPA.setTipoEvento(1);
        eventoEPA.setTiempo(mainSimulacion.reloj);

        lef.agregarEvento(eventoEPA);
    }

    else
    {

        //3. atendidos ++; // variables de desempeño

        int atendidos=0;

        atendidos ++;

        //4. ColaAscensor[PisoActual]--

        mainSimulacion.colaAdentro.replace(mainSimulacion.pActualAscensor,
                                           mainSimulacion.colaAdentro.at(mainSimulacion.pActualAscensor) -1);


        //5. capacidad ocupada--

        mainSimulacion.capacidadOc--;


    }
}
