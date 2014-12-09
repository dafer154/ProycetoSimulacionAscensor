#ifndef ESCENARIO_H
#define ESCENARIO_H
#include "mainsimulacion.h"

#include <QWidget>

namespace Ui {
class Escenario;
}

class Escenario : public QWidget
{
    Q_OBJECT

public:
    explicit Escenario(QWidget *parent = 0);
    void llenarTabla(MainSimulacion &mainS);


    Escenario(MainSimulacion &m);
    ~Escenario();

private:
    Ui::Escenario *ui;
};

#endif // ESCENARIO_H
