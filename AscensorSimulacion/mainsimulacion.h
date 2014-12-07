#ifndef MAINSIMULACION_H
#define MAINSIMULACION_H
#include <lef.h>


class MainSimulacion
{
public:

     Lef l; //lef
     int //personas
     tEntreLLegada,hLlegada,pActualPersona,pDestinoPersona,reloj,tEntradaAscensorPersona,tSalidaAscensorPersona;
     //ascensor
     int capacidadOc,pActualAscensor,pDestinoAscensor,capacidadMax;
     bool subiendo;
     //edificio
     int cantidadPisos,cantidadAscensores;

     QVector <int> colaAdentro,colaAfuera;//mainSimulacion;


     void inicializar();

     void iniciarSimulacion();

};




#endif // MAINSIMULACION_H
