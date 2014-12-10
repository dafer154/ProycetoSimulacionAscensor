/********************************************************************************
** Form generated from reading UI file 'escenario.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Escenario
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *tb_datos;

    void setupUi(QWidget *Escenario)
    {
        if (Escenario->objectName().isEmpty())
            Escenario->setObjectName(QStringLiteral("Escenario"));
        Escenario->resize(605, 282);
        horizontalLayout = new QHBoxLayout(Escenario);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tb_datos = new QTableWidget(Escenario);
        if (tb_datos->columnCount() < 6)
            tb_datos->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tb_datos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tb_datos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tb_datos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tb_datos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tb_datos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tb_datos->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tb_datos->rowCount() < 4)
            tb_datos->setRowCount(4);
        tb_datos->setObjectName(QStringLiteral("tb_datos"));
        tb_datos->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tb_datos->setAutoScroll(true);
        tb_datos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tb_datos->setProperty("showDropIndicator", QVariant(true));
        tb_datos->setDragEnabled(false);
        tb_datos->setDragDropOverwriteMode(true);
        tb_datos->setAlternatingRowColors(true);
        tb_datos->setShowGrid(true);
        tb_datos->setGridStyle(Qt::SolidLine);
        tb_datos->setSortingEnabled(false);
        tb_datos->setWordWrap(true);
        tb_datos->setCornerButtonEnabled(true);
        tb_datos->setRowCount(4);

        horizontalLayout->addWidget(tb_datos);


        retranslateUi(Escenario);

        QMetaObject::connectSlotsByName(Escenario);
    } // setupUi

    void retranslateUi(QWidget *Escenario)
    {
        Escenario->setWindowTitle(QApplication::translate("Escenario", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = tb_datos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Escenario", "Simulaciones", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tb_datos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Escenario", "Variable de desempe\303\261o", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tb_datos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Escenario", "Promedio", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tb_datos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Escenario", "Desviacion Estandar", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tb_datos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Escenario", "Int Conf Inf", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tb_datos->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Escenario", "Int Conf Sup", 0));
    } // retranslateUi

};

namespace Ui {
    class Escenario: public Ui_Escenario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESCENARIO_H
