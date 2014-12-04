#ifndef LEF_H
#define LEF_H
#include <QVector>
#include<evento.h>
class Lef
{
public:
    Lef();


private:

    QVector<Evento>LEF;
    void agregarEvento(Evento event);
    void quitarEvento();
    void ordenarLEF();



};

#endif // LEF_H
