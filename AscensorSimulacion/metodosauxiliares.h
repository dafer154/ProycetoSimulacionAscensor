#ifndef METODOSAUXILIARES_H
#define METODOSAUXILIARES_H

#include "aleatorios.h"
#include <QVector>
#include"math.h"

class MetodosAuxiliares
{
public:
    MetodosAuxiliares();
    MetodosAuxiliares(int cantidadPisos);
    ~MetodosAuxiliares();

    void setTipoEvento(QString tipoEvento);
    int calcularPisoAleatorioPersona(int cantidadPisos);
    int calcularPisoDestinoAscensor(QVector<int> colaAfuera, QVector<int> colaAdentro,
                                   int pisoActual, bool subiendo, int cantidadPisos, bool ascensorLlleno);

    int tiempoEntreLLegadas(int pisoActualPersona);

    int generarAleatorioRango(int inferior, int superior);
    double desviacionEstandar(QVector<double> valores, double promedio);
    double promedio(QVector<double> valores);
    double intervaloConfianzaInferior(double promedio, int tamValores, double desviacion);
    double intervaloConfianzaSuperior(double promedio, int tamValores, double desviacion);



    Aleatorios aleatorios;
};

#endif // METODOSAUXILIARES_H
