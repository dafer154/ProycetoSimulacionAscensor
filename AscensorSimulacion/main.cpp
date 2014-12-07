#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "aleatorios.h"
#include "metodosauxiliares.h"
#include "vector"


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

    /*Ejemplo de uso de generacion de aleatorios
    double parametroPrimerPiso = 0.0025;
    double parametroDemasPisos = 0.002;

    Aleatorios aleatorios;
    double uniforme = aleatorios.generarEnteroAleatorioUniforme();
    int exponencial = aleatorios.generarEnteroAleatorioExponencial(parametroPrimerPiso);

    cout<< "Uniforme: " << uniforme << " Exponencial: " << exponencial << endl;


    double promedio;
    for (int var = 0; var < 20; ++var) {
        uniforme = aleatorios.generarEnteroAleatorioUniforme();
           exponencial = aleatorios.generarEnteroAleatorioExponencial(parametroPrimerPiso);

           promedio += exponencial;
            cout<< "Uniforme: " << uniforme << " Exponencial: " << exponencial << endl;

    }

    cout<<  "promedio: " << promedio/20 << endl;
    cout<< "________________________________________________" << endl;


    */


    /*
    //Prueba calcular calcularPisoActualPersona
    MetodosAuxiliares auxiliares(6);

    vector <double>pisos;
    for (int var = 0; var < 6; ++var) {
        pisos.push_back(0);

    }

    for (int var = 0; var < 5000; ++var) {
        pisos[auxiliares.calcularPisoActualPersona()-1]++;
    }

    for (int var = 0; var < 6; ++var) {
        cout<< "Piso: " <<  var+1 << ": " << pisos[var]/5000<< endl;
    }
    */

    //Prueba calcularPisoDestinAscensor

   /* MetodosAuxiliares auxiliares(6);

    QVector <int>colaAfuera;
    colaAfuera.push_back(0);
    colaAfuera.push_back(0);
    colaAfuera.push_back(2);
    colaAfuera.push_back(1);
    colaAfuera.push_back(0);
    colaAfuera.push_back(0);

    QVector <int>colaAdentro;
    colaAdentro.push_back(0);
    colaAdentro.push_back(0);
    colaAdentro.push_back(3);
    colaAdentro.push_back(5);
    colaAdentro.push_back(0);
    colaAdentro.push_back(0);

    bool subiendo = true;
    int pisoActual = 0;
    cout << "el piso destino subiendo  con piso actual = "<< pisoActual <<" es ==> " <<
            auxiliares.calcularPisoDestinoAscensor(colaAfuera, colaAdentro,pisoActual,subiendo) << endl;

    subiendo = false;
    cout << "el piso destino bajando  con piso actual = "<< pisoActual <<" es ==> " <<
            auxiliares.calcularPisoDestinoAscensor(colaAfuera, colaAdentro,pisoActual,subiendo) << endl;

            */
    return 0;

}
