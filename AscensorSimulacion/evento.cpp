#include "evento.h"



Evento::Evento()
{
}




int Evento::getTipoEvento() const{
    return tipoEvento;

}

int Evento::getTiempo() const{

    return tiempo;
}

QString Evento::getNombreEvento() const{
    return nombre;
}

void Evento::setTiempo(int tiempo){

    this->tiempo = tiempo;
}


void Evento:: setTipoEvento(int tipoEvento){

    this->tipoEvento = tipoEvento;

}

void Evento::setNombreEvento(QString nombre){
    this->nombre = nombre;
}


