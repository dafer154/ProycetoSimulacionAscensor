#ifndef EVENTO_H
#define EVENTO_H
#include <QString>

class Evento
{

private:

    int tipoEvento;//
    int tiempo;//

public:

    Evento();


    int getTipoEvento() const;
    int getTiempo () const;
    void setTipoEvento(int tipoEvento);
    void setTiempo(int tiempo);




};

#endif // EVENTO_H
