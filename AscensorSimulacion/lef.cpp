#include "lef.h"
#include "evento.h"

Lef::Lef()
{
}

Lef::~Lef()
{
}

void Lef::ordenarLEF(){
    int size = LEF.length();
    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j < size-1; ++j)
        {
            if(LEF.at(i).getTiempo() > LEF.at(j).getTiempo())
            {
                Evento tempEvent = LEF.at(i);
                LEF.replace(i, LEF.at(j));
                LEF.replace(j, tempEvent);
            }
        }

    }
}

void Lef::agregarEvento(Evento evento){

    LEF.push_back(evento);
    ordenarLEF();
}


Evento Lef::quitarEvento(){

   LEF.removeFirst();

}


