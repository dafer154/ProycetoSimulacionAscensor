#ifndef MAINSIMULACION_H
#define MAINSIMULACION_H
#include "lef.h"
#include "evento.h"
#include "metodosauxiliares.h"


class MainSimulacion
{
public:

    MainSimulacion();
    ~MainSimulacion();


    Lef lef; //lef
    //simulacion
    int reloj, cantidadSimulaciones, tiempoSimulacion;
    //Personas
    int tEntradaAscensorPersona,tSalidaAscensorPersona;
    //ascensor
    int capacidadOc,pActualAscensor,pDestinoAscensor,capacidadMax, tiempoArranque, tiempoDesplazamiento;
    bool subiendo;
    //edificio
    int cantidadPisos,cantidadAscensores;

    //Variables de desempenio
    int atendidos, tiempoEsperaAcum;
    QVector <int> tamanoCola, iniColaAcum;
    QVector<double> valorEsperadoColas;

    QVector <int> colaAdentro,colaAfuera;//mainSimulacion;


    void inicializar(int cantidadAscensores, int tiempoArranque,
                     int cantidadPisos, int capacidadMax, int tiempoDesplazamiento,
                     int tEntradaAscensorPersona, int tSalidaAscensorPersona,
                     int cantidadSimulaciones, int tiempoSimulacion);

    void iniciarSimulacion(int cantidadAscensores, int tiempoArranque, int cantidadPisos, int capacidadMax, int tiempoDesplazamiento, int tEntradaAscensorPersona, int tSalidaAscensorPersona, int cantidadSimulaciones, int tiempoSimulacion);

    MetodosAuxiliares auxiliar;
    Aleatorios aleatorio;


    void llegadaPersonaPiso();
    void entradaPersonaAscensor();
    void cambioPisoAscensor();
    void colaAcum(int piso);


};




#endif // MAINSIMULACION_H
