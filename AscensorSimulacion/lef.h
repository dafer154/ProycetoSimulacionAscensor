#ifndef LEF_H
#define LEF_H
#include <QVector>
#include<evento.h>
class Lef
{
public:
    Lef();
    //personas
    int tEntreLLegada,hLlegada,pActualPersona,pDestinoPersona,
   //ascensor
    capacidadOc,pActualAscensor,pDestinoAscensor,tipoLef,
    reloj,cantidadPisos,cantidadAscensores;
    bool arriba;


    QVector <int> colaAdentro,colaAfuera;
    QVector<Evento>listaEventos;
    void agregarEvento(Evento event);
    void quitarEvento();
    void inicializar();

};

#endif // LEF_H
