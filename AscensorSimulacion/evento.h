#ifndef EVENTO_H
#define EVENTO_H
#include <QString>

class Evento
{

private:

    int tipoEvento;//
    int tiempo;//
    QString nombre;

public:

    Evento();


    int getTipoEvento() const;
    QString getNombreEvento() const;
    int getTiempo () const;
    void setTipoEvento(int tipoEvento);
    void setTiempo(int tiempo);
    void setNombreEvento(QString nombre);




};

#endif // EVENTO_H
