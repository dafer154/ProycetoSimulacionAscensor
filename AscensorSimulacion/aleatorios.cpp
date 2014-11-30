#include "aleatorios.h"

#include <stdio.h>
#include <time.h>
#include <math.h>
#include "RandomGenerator/mersenne.cpp"
#include "RandomGenerator/mother.cpp"





Aleatorios::Aleatorios(){    
}

int Aleatorios::generarEnteroAleatorioUniforme(){
    // Declare object of combined generator
    int seed = (int)time(0);
    CRandomMersenne RanGen(seed);       // make instance of random number generator
    return RanGen.IRandom(0,99);
}

int Aleatorios::generarEnteroAleatorioExponencial(double parametro){
    return (-1/parametro)*log(parametro);
}
