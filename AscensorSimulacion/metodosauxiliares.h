#ifndef METODOSAUXILIARES_H
#define METODOSAUXILIARES_H

#include "aleatorios.h"
#include "QVector"

class MetodosAuxiliares
{
public:
    MetodosAuxiliares(int cantidadPisos);
    int cantidadPisos;
    int calcularPisoActualPersona();
    int calcularPisoDestinoAscensor(QVector<int> colaAfuera, QVector<int> colaAdentro,
                                   int pisoActual, bool subiendo);
    Aleatorios aleatorios;
};

#endif // METODOSAUXILIARES_H
