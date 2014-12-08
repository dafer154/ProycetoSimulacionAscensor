#include "aleatorios.h"

#include "RandomGenerator/mersenne.cpp"
#include "RandomGenerator/mother.cpp"

#include <stdio.h>

#include <math.h>





Aleatorios::Aleatorios()
{
}



double Aleatorios::generarAleatorioUniforme(){
    return RanGen.Random();
}

int Aleatorios::generarEnteroAleatorioExponencial(double parametro){
    return (-1/parametro)*log(generarAleatorioUniforme());
}
