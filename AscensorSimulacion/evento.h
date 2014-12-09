#ifndef EVENTO_H
#define EVENTO_H
#include <QString>

class Evento
{

private:

    int tipoEvento;//
    int tiempo;//
    QString nombre;
    int tiempoLlegada;

public:

    Evento();


    int getTipoEvento() const;
    QString getNombreEvento() const;
    int getTiempo () const;
    int getTiempollegada() const;
    void setTipoEvento(int tipoEvento);
    void setTiempo(int tiempo);
    void setNombreEvento(QString nombre);
    void setTiempoLlegada(int valor);




};

#endif // EVENTO_H
