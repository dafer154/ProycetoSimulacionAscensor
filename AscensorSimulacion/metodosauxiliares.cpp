#include "metodosauxiliares.h"
#include "math.h"
#include "evento.h"
#include "aleatorios.h"

#include <iostream>
using namespace std;

MetodosAuxiliares::MetodosAuxiliares()
{

}


MetodosAuxiliares::~MetodosAuxiliares()
{

}

int MetodosAuxiliares::calcularPisoAleatorioPersona(int cantidadPisos){
    /*Divido entre la cantidad de pisos + 3 (porque el 1 piso es 4 veces màs probable
    que los demás) parea saber el tamaño de los intervalos necesarios para calcular el
    piso*/
    double tamanioIntervalos = 1/(double)(cantidadPisos+3);
    double aleatorioUniforme = aleatorios.generarAleatorioUniforme();
    if(aleatorioUniforme >= 0 && aleatorioUniforme < 3*tamanioIntervalos){
        return 0;
    }

    return floor(aleatorioUniforme/tamanioIntervalos)-3;
}

int MetodosAuxiliares::calcularPisoDestinoAscensor(QVector<int> colaAfuera, QVector<int> colaAdentro,
                                                  int pisoActual, bool subiendo,
                                                   int cantidadPisos, bool ascensorLlleno){
    int ultimoPiso = cantidadPisos-1;
    if (subiendo) {
        //buscar piso mas cercano hacia arriba (numero mayor mas cercano)
        if(ascensorLlleno){
            pisoActual++;
        }
        for (int piso = pisoActual; piso <= ultimoPiso; ++piso) {
            if(colaAfuera.at(piso) > 0 || colaAdentro.at(piso) > 0){
                return piso;
            }
        }
        if(ascensorLlleno){
            pisoActual--;
        }
        //No hay solicitudes arriba verificar abajo
        for (int piso = pisoActual; piso >= 0; --piso) {
            if(colaAfuera.at(piso) > 0 || colaAdentro.at(piso) > 0){
                return piso;
            }
        }

    }
    if(!subiendo){
        if(ascensorLlleno){
            pisoActual--;
        }
        //buscar piso mas cercano hacia abajo (numero menor mas cercano)
        for (int piso = pisoActual; piso >= 0; --piso) {
            if(colaAfuera.at(piso) > 0 || colaAdentro.at(piso) > 0){
                return piso;
            }
        }
        if(ascensorLlleno){
            pisoActual++;
        }
        //No hay solicitudes abajo verificar arriba
        for (int piso = pisoActual; piso <= ultimoPiso; ++piso) {
            if(colaAfuera.at(piso) > 0 || colaAdentro.at(piso) > 0){
                return piso;
            }
        }
    }
    return pisoActual;
}

int MetodosAuxiliares::tiempoEntreLLegadas(int pisoActualPersona){



    if(pisoActualPersona==1){

        return aleatorios.generarEnteroAleatorioExponencial(0.04);

    }
    else
    {

        return aleatorios.generarEnteroAleatorioExponencial(0.02);
    }
}
