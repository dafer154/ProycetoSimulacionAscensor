#ifndef ALEATORIOS_H
#define ALEATORIOS_H
#include "RandomGenerator/randomc.h"
#include <time.h>

class Aleatorios
{
public:
    Aleatorios();
    int semilla = (int)time(0);
    CRandomMersenne RanGen {semilla};
    double generarEnteroAleatorioUniforme();
    int generarEnteroAleatorioExponencial(double parametro);
    
};

#endif // ALEATORIOS_H
