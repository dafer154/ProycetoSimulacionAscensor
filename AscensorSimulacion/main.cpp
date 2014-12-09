#include "mainwindow.h"
#include <QApplication>
#include "mainsimulacion.h"
#include "metodosauxiliares.h"

#include <iostream>
using namespace std;


/* Comentado mientras no halla GUI

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
*/

//Para hacer cosas con consola mientras no hay GUI
int main(){
    int cantidadAscensores = 1;    
    int cantidadPisos = 6;


    int capacidadMax = 6;
     int tiempoArranque = 5;
     int tiempoDesplazamiento = 30;

    int tEntradaAscensorPersona = 1;
    int tSalidaAscensorPersona = 1;
    int cantidadSimulaciones = 10;
    int tiempoSimulacion = 4;

    MainSimulacion mainSimulacion;
    mainSimulacion.iniciarSimulacion(cantidadAscensores, tiempoArranque, cantidadPisos,
                                     capacidadMax,tiempoDesplazamiento, tEntradaAscensorPersona,
                                     tSalidaAscensorPersona, cantidadSimulaciones, tiempoSimulacion);

    return 0;
}
