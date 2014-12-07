#include "mainsimulacion.h"
#include "evento.h"
MainSimulacion::MainSimulacion()
{
}

MainSimulacion::~MainSimulacion()
{
}


void MainSimulacion::inicializar(){//main Simulacion

    tEntreLLegada=0;
  hLlegada=0;
  pActualPersona=0;
  pDestinoPersona=0;
  capacidadOc=0;
  pActualAscensor=0;
  pDestinoPersona=0;
  cantidadPisos=0;
  cantidadAscensores=0;
  reloj=0;
  tEntradaAscensorPersona=0;
  tSalidaAscensorPersona=0;
  subiendo=true;
  colaAdentro.clear();
  colaAfuera.clear();


}


void MainSimulacion::iniciarSimulacion(){
    while(!l.LEF.size()==0)
    {
        //Evento evento = lef.sacar();



        switch(l.quitarEvento().getTipoEvento())
        {
        case 0:   //0 = LPP
            break;
        case 1:   // 1 =EPA
            break;
        case 2:   // 2 =CPA
            break;
        }
    }}
