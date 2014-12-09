#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "escenario.h"
#include "mainsimulacion.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    void nuevaTab(MainSimulacion m);
    Escenario *sigTab;
    //void cerrarTab(int index);
    ~MainWindow();
    int cantidadAscensores;
    int cantidadPisos;


    int capacidadMax;
     int tiempoArranque;
     int tiempoDesplazamiento;

    int tEntradaAscensorPersona;
    int tSalidaAscensorPersona;
    int cantidadSimulaciones;
    int tiempoSimulacion;
    MainSimulacion mainSimulacion;


private slots:
    void on_pb_iniciarSimulacion_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
