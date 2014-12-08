#include "mainwindow.h"
#include <QApplication>
#include "mainsimulacion.h"

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
    int tiempoArranque = 20;
    int cantidadPisos = 3;
    int capacidadMax = 3;
    int tiempoDesplazamiento = 100;
    int tEntradaAscensorPersona = 1;
    int tSalidaAscensorPersona = 1;
    int cantidadSimulaciones = 10;

    MainSimulacion mainSimulacion;
    mainSimulacion.inicializar(cantidadAscensores, tiempoArranque, cantidadPisos,
                               capacidadMax,tiempoDesplazamiento, tEntradaAscensorPersona,
                               tSalidaAscensorPersona, cantidadSimulaciones);
    mainSimulacion.iniciarSimulacion();


    return 0;
}
