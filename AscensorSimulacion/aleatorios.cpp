#include "aleatorios.h"

#include "RandomGenerator/mersenne.cpp"
#include "RandomGenerator/mother.cpp"

#include <stdio.h>

#include <math.h>


#include <iostream>
using namespace std;


Aleatorios::Aleatorios(){
}

double Aleatorios::generarEnteroAleatorioUniforme(){
    return RanGen.Random();
}

int Aleatorios::generarEnteroAleatorioExponencial(double parametro){
    return (-1/parametro)*log(generarEnteroAleatorioUniforme());
}
