#include "escenario.h"
#include "ui_escenario.h"

Escenario::Escenario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Escenario)
{
    ui->setupUi(this);
}

Escenario::~Escenario()
{
    delete ui;
}
