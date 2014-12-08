/********************************************************************************
** Form generated from reading UI file 'escenario.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESCENARIO_H
#define UI_ESCENARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Escenario
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;

    void setupUi(QWidget *Escenario)
    {
        if (Escenario->objectName().isEmpty())
            Escenario->setObjectName(QStringLiteral("Escenario"));
        Escenario->resize(605, 282);
        horizontalLayout = new QHBoxLayout(Escenario);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(Escenario);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);


        retranslateUi(Escenario);

        QMetaObject::connectSlotsByName(Escenario);
    } // setupUi

    void retranslateUi(QWidget *Escenario)
    {
        Escenario->setWindowTitle(QApplication::translate("Escenario", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Escenario: public Ui_Escenario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESCENARIO_H
