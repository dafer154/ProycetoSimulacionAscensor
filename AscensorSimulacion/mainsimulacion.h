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
    QVector <double> variablesDesempenio;

    int atendidos, tamanoCola, iniColaAcum, colaMaxima, capacidadOcGlobal, iniCapacidadOcuAcum;

    QVector <double> valorEsperadoColas, atendidosPorSimulacion, capacidadPromedioOcupada,tiemposEspera,tiemposEsperaGeneral;
    int sumarColas();
    void agregarDatosVarDesem(QVector<double> valoresDesem);




    QVector <int> colaAdentro,colaAfueraArriba, colaAfueraAbajo;//mainSimulacion;


    void inicializar(int cantidadAscensores, int tiempoArranque,
                     int cantidadPisos, int capacidadMax, int tiempoDesplazamiento,
                     int tEntradaAscensorPersona, int tSalidaAscensorPersona,
                     int cantidadSimulaciones, int tiempoSimulacion);

    void iniciarSimulacion(int cantidadAscensores, int tiempoArranque, int cantidadPisos, int capacidadMax, int tiempoDesplazamiento, int tEntradaAscensorPersona, int tSalidaAscensorPersona, int cantidadSimulaciones, int tiempoSimulacion);

    MetodosAuxiliares auxiliar;
    Aleatorios aleatorio;

    //Eventos
    void llegadaPersonaPiso();
    void entradaPersonaAscensor(int tiempoLlegada);
    void cambioPisoAscensor(int tiempoLlegada);



    void colaAcum();
    void calcularColaMax();
    void capacidadOcAcum();

    //Temporales
    //Cantidad de Personas que Llegan
    QVector <int> llegadasPorPiso;
    int totalQueLlegan;




};




#endif // MAINSIMULACION_H
