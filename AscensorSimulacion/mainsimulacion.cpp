#include "mainsimulacion.h"
#include "evento.h"
MainSimulacion::MainSimulacion()
{
}



MainSimulacion::inicializar(){//main Simulacion
  tEntreLLegada=0;
  hLlegada=0;
  pActualPersona=0;
  pDestinoPersona=0;
  capacidadOc=0;
  pActualAscensor=0;
  pDestinoPersona=0;
  cantidadPisos=0;
  cantidadAscensores=0;
  arriba=true;
  colaAdentro=new MainSimulacion();
  colaAfuera=new MainSimulacion();


}


MainSimulacion::iniciarSimulacion(){

    while(!l.listaEventos.size()==0,)
    {
        switch (l.listaEventos.at(0).tipoEvento) {
        case "LPP":

            break;
        case "EPA":

            break;
        case "CPA":

            break;

        }


    }

}
