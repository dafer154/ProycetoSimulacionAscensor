#ifndef LEF_H
#define LEF_H
#include <QVector>
#include<evento.h>
class Lef
{
public:

    Lef();
    ~Lef();

    QVector<Evento> LEF;
    void agregarEvento(Evento evento);
    Evento quitarEvento();
    void ordenarLEF();



};

#endif // LEF_H
