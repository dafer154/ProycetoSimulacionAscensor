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
int Evento::getTiempollegada() const{
    return tiempoLlegada;
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

void Evento::setTiempoLlegada(int valor){
    this->tiempoLlegada=valor;
}


