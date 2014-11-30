#include "lef.h"
#include "evento.h"

Lef::Lef()
{
}

LEF::inicializar(){
  tEntreLLegada=0;
  hLlegada=0;
  pActualPersona=0;
  pDestinoPersona=0;
  //colaAdentro
 //colaAfuera
   //ascensor
  capacidadOc=0;
  pActualAscensor=0;
  pisodestino=0;
  reloj=0;
  cantidadPisos=0;
  cantidadAscensores=0;
  arriba=true;

}


Lef::agregarEvento(Evento event){
listaEventos.push_back(event);
}

Lef::quitarEvento(){
listaEventos.removeLast();
}




