#include "lef.h"
#include "evento.h"

Lef::Lef()
{
}

Lef::agregarEvento(Evento event){
    listaEventos.push_back(event);
    ordenarLEF();
}


Lef::quitarEvento(){
    LEF.removeFirst();
}

Lef::ordenarLEF(){
    int size = LEF.length();
    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j < size-1; ++j) {
            if(LEF.at(i).geTiempo()>LEF.at(j).getTiempo()){
                Event tempEvent = LEF.at(i);
                LEF.replace(i, LEF.at(j));
                LEF.replace(j, tempEvent);
            }
        }

    }
}
