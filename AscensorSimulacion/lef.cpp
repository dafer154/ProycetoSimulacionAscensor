#include "lef.h"
#include "evento.h"
#include <iostream>
using namespace std;


Lef::Lef()
{
}

Lef::~Lef()
{
}

void Lef::ordenarLEF(){
    int size = LEF.length();
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < size-1; ++j)
        {            
            if(LEF.at(j).getTiempo() > LEF.at(j+1).getTiempo())
            {
                Evento tempEvent = LEF.at(j);
                LEF.replace(j, LEF.at(j+1));
                LEF.replace(j+1, tempEvent);
            }
        }

    }
}

void Lef::agregarEvento(Evento evento){

    LEF.push_back(evento);
    ordenarLEF();


}


Evento Lef::quitarEvento(){
   Evento primerEvento = LEF.at(0);
   LEF.removeFirst();
   return primerEvento;

}


