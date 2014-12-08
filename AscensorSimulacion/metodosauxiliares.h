#ifndef METODOSAUXILIARES_H
#define METODOSAUXILIARES_H

#include "aleatorios.h"
#include <QVector>

class MetodosAuxiliares
{
public:
    MetodosAuxiliares();
    MetodosAuxiliares(int cantidadPisos);
    ~MetodosAuxiliares();

    void setTipoEvento(QString tipoEvento);
    int cantidadPisos;
    int calcularPisoAleatorioPersona();
    int calcularPisoDestinoAscensor(QVector<int> colaAfuera, QVector<int> colaAdentro,
                                   int pisoActual, bool subiendo);

    int tiempoEntreLLegadas(int pisoActualPersona);

    Aleatorios aleatorios;
};

#endif // METODOSAUXILIARES_H
