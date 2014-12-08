#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QObject"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   }

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::nuevaTab(){//metodo para agregar tabs

       Escenario *tab_2 = new  Escenario();
       tab_2->setObjectName(QStringLiteral("tab_2"));
       ui->tw_simulacion->addTab(tab_2, QString("TAB 2"));

           //connect(ui->tw_simulacion, SIGNAL(tabCloseRequested(int)), this, SLOT(cerrarTab(int)));

       //setCentralWidget(ui->tw_simulacion); si queda tiempo



}

void MainWindow::on_pb_iniciarSimulacion_clicked()
{
nuevaTab();
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
