#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QObject"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
   }

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::nuevaTab(MainSimulacion mainSimulacion){//metodo para agregar tabs
       Escenario *sigTab = new  Escenario();
       sigTab->llenarTabla(mainSimulacion);

       sigTab->setObjectName(QStringLiteral("tab_2"));
       ui->tw_simulacion->addTab(sigTab, QString("escenario i"));

           //connect(ui->tw_simulacion, SIGNAL(tabCloseRequested(int)), this, SLOT(cerrarTab(int)));

       //setCentralWidget(ui->tw_simulacion); si queda tiempo
}

void MainWindow::on_pb_iniciarSimulacion_clicked()
{
    cantidadAscensores=ui->sb_cantidadAscensores->text().toInt();
    cantidadPisos=ui->sb_cantidadPisos->text().toInt();
    capacidadMax=ui->sb_capacidadAscensores->text().toInt();
    tiempoArranque=ui->sb_tiempodeArranque->text().toInt();
    tiempoDesplazamiento=ui->sb_desplazamientoentrePisos->text().toInt();
    tEntradaAscensorPersona=ui->sb_tEntradaAscensor->text().toInt();
    tSalidaAscensorPersona=ui->sb_tSalidaAscensor->text().toInt();
    cantidadSimulaciones=ui->sb_cantidadSimulacion->text().toInt();
    tiempoSimulacion=ui->sb_tiempoSimulacion->text().toInt();

    mainSimulacion.iniciarSimulacion(cantidadAscensores, tiempoArranque, cantidadPisos,
                                     capacidadMax,tiempoDesplazamiento, tEntradaAscensorPersona,
                                     tSalidaAscensorPersona, cantidadSimulaciones, tiempoSimulacion);                                 capacidadMax,tiempoDesplazamiento, tEntradaAscensorPersona,
nuevaTab(mainSimulacion);
}


/* si queda tiempo
  void MainWindow::cerrarTab(int index)
    {
        // Remove the tab using removeTab(). Be aware that the
        // page widget itself is not deleted!
        ui->tw_simulacion->removeTab(index);
        // OR (do NOT do both)

        // Delete the page widget, which automatically removes
        // the tab as well.
       //delete ui->tw_simulacion->widget(index);
    }
*/



void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    if(index==0)
    {
     ui->sb_tiempodeArranque->setValue(20);
     ui->sb_desplazamientoentrePisos->setValue(100);
     ui->sb_capacidadAscensores->setValue(4);

    }
    else
        if(index==1)
        {
             ui->sb_tiempodeArranque->setValue(20);
             ui->sb_desplazamientoentrePisos->setValue(100);
             ui->sb_capacidadAscensores->setValue(6);

        }

        else
            if(index==2)
            {
                 ui->sb_tiempodeArranque->setValue(5);
                 ui->sb_desplazamientoentrePisos->setValue(30);
                 ui->sb_capacidadAscensores->setValue(4);

            }

            else
                if(index==3)
                {
                     ui->sb_tiempodeArranque->setValue(5);
                     ui->sb_desplazamientoentrePisos->setValue(30);
                     ui->sb_capacidadAscensores->setValue(6);

                }
}
