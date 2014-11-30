#ifndef METODOSAUXILIARES_H
#define METODOSAUXILIARES_H

#include "aleatorios.h"

class MetodosAuxiliares
{
public:
    MetodosAuxiliares(int cantidadPisos);
    int cantidadPisos;
    int calcularPisoActualPersona();
    Aleatorios aleatorios;
};

#endif // METODOSAUXILIARES_H
