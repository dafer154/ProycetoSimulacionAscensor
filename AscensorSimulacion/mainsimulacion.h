#ifndef MAINSIMULACION_H
#define MAINSIMULACION_H
#include <lef.h>


class MainSimulacion
{
public:
    MainSimulacion();
    Lef l; //lef
    int //personas
    tEntreLLegada,hLlegada,pActualPersona,pDestinoPersona;
    //ascensor
    int capacidadOc,pActualAscensor,pDestinoAscensor;
    bool arriba;
    //edificio
    int cantidadPisos,cantidadAscensores;

    QVector <int> colaAdentro,colaAfuera;//mainSimulacion;



    void inicializar();

    void iniciarSimulacion();

};




#endif // MAINSIMULACION_H
