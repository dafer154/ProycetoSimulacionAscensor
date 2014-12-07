#include "metodosauxiliares.h"
#include "math.h"

#include <iostream>
using namespace std;

MetodosAuxiliares::MetodosAuxiliares(int cantidadPisos)
{
    this->cantidadPisos = cantidadPisos;
}

int MetodosAuxiliares::calcularPisoActualPersona(){
    /*Divido entre la cantidad de pisos + 3 (porque el 1 piso es 4 veces màs probable
    que los demás) parea saber el tamaño de los intervalos necesarios para calcular el
    piso*/
    double tamanioIntervalos = 1/(double)(cantidadPisos+3);
    double aleatorioUniforme = aleatorios.generarAleatorioUniforme();
    if(aleatorioUniforme >= 0 && aleatorioUniforme < 3*tamanioIntervalos){
        return 1;
    }

    return round(aleatorioUniforme/tamanioIntervalos)-2;
}

int MetodosAuxiliares::calcularPisoDestinoAscensor(QVector<int> colaAfuera, QVector<int> colaAdentro,
                                                  int pisoActual, bool subiendo){
    int ultimoPiso = cantidadPisos-1;
    if(pisoActual == ultimoPiso){//Si està en el ùltimo piso, debe bajar.
        subiendo=false;
    }else if(pisoActual == 0){  //Si està en el primer piso, debe subir.
        subiendo=true;
    }
    if (subiendo) {
        //buscar piso mas cercano hacia arriba (numero mayor mas cercano)
        for (int piso = pisoActual; piso <= ultimoPiso; ++piso) {
            if(colaAfuera.at(piso) > 0 || colaAdentro.at(piso) > 0){
                return piso;
            }
        }
    }else{
        //buscar piso mas cercano hacia abajo (numero menor mas cercano)
        for (int piso = pisoActual; piso >= 0; --piso) {
            if(colaAfuera.at(piso) > 0 || colaAdentro.at(piso) > 0){
                return piso;
            }
        }
    }
    return pisoActual;
}
