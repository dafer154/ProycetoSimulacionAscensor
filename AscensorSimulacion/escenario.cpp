#include "escenario.h"
#include "ui_escenario.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QtCore/QCoreApplication>
#include <QHeaderView>
#include <QMessageBox>


Escenario::Escenario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Escenario)
{
    ui->setupUi(this);
    QHeaderView* header = ui->tb_datos->horizontalHeader();
       header->setSectionResizeMode(QHeaderView::Stretch);



    //ui->tb_datos->setShowGrid(false);
    //ui->tb_datos->setGeometry(QApplication::desktop()->screenGeometry());
}




Escenario::~Escenario()
{
    delete ui;
}


void Escenario::llenarTabla(MainSimulacion &mainS){

QStringList variablesDes;
variablesDes<<"Atendidos"<<"Vr esperado Cola"<<"Capacidad prom ocupada"<<"Tiempo promedio de espera"<<"Cola maxima";
int contador=0;
    for (int i = 0; i < 4; ++i) {

        ui->tb_datos->setItem(i,0,new QTableWidgetItem(QString::number(mainS.cantidadSimulaciones)));
        ui->tb_datos->setItem(i,1,new QTableWidgetItem(variablesDes.at(i)));
        ui->tb_datos->setItem(i,2,new QTableWidgetItem(QString::number(mainS.variablesDesempenio.at(contador))));
        contador++;
        ui->tb_datos->setItem(i,3,new QTableWidgetItem(QString::number(mainS.variablesDesempenio.at(contador))));
        contador++;
        ui->tb_datos->setItem(i,4,new QTableWidgetItem(QString::number(mainS.variablesDesempenio.at(contador))));
        contador++;
        ui->tb_datos->setItem(i,5,new QTableWidgetItem(QString::number(mainS.variablesDesempenio.at(contador))));
        contador++;


          ui->tb_datos->setItem(0,4,new QTableWidgetItem(QString::number(mainS.variablesDesempenio.at(0))));
}

}



