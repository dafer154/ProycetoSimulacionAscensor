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
