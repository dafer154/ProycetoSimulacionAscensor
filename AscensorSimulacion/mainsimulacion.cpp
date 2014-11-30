#include "mainsimulacion.h"
#include "evento.h"
MainSimulacion::MainSimulacion()
{
}
MainSimulacion::iniciarSimulacion(){
    l.inicializar();


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
