#ifndef ESCENARIO_H
#define ESCENARIO_H

#include <QWidget>

namespace Ui {
class Escenario;
}

class Escenario : public QWidget
{
    Q_OBJECT

public:
    explicit Escenario(QWidget *parent = 0);
    ~Escenario();

private:
    Ui::Escenario *ui;
};

#endif // ESCENARIO_H
