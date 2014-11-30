#ifndef LEF_H
#define LEF_H

class Lef
{
public:
    Lef();
    //personas
    int tEntreLLegada,hLlegada,pActualPersona,pDestinoPersona,
   //ascensor
    capacidadOc,pActualAscensor,pisodestino,tipoLef,
    reloj,cantidadPisos,cantidadAscensores;
    bool arriba;


    QVector colaAdentro,colaAfuera,listaEventos;
    void agregarEvento(Evento event);
    void quitarEvento();
    void inicializar();

};

#endif // LEF_H
