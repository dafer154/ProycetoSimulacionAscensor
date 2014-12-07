/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tw_simulacion;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_cantidadAscensores;
    QSpinBox *sb_cantidadAscensores;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lb_tiempodeArranque;
    QSpinBox *sb_tiempodeArranque;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lb_cantidadPisos;
    QSpinBox *sb_cantidadPisos;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lb_capacidadAscensores;
    QSpinBox *sb_capacidadAscensores;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lb_desplazamientoentrePisos;
    QSpinBox *sb_desplazamientoentrePisos;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lb_tEntradaAscensor;
    QSpinBox *sb_tEntradaAscensor;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lb_tSalidaAscensor;
    QSpinBox *sb_tSalidaAscensor;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *lb_cantidadSimulacion;
    QSpinBox *sb_cantidadSimulacion;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pb_limpiarTodo;
    QPushButton *pb_iniciarSimulacion;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(655, 456);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tw_simulacion = new QTabWidget(centralWidget);
        tw_simulacion->setObjectName(QStringLiteral("tw_simulacion"));
        tw_simulacion->setEnabled(true);
        tw_simulacion->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(609, 96));
        groupBox->setMaximumSize(QSize(16777215, 96));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 21, 504, 56));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lb_cantidadAscensores = new QLabel(layoutWidget);
        lb_cantidadAscensores->setObjectName(QStringLiteral("lb_cantidadAscensores"));
        lb_cantidadAscensores->setMinimumSize(QSize(100, 20));

        horizontalLayout->addWidget(lb_cantidadAscensores);

        sb_cantidadAscensores = new QSpinBox(layoutWidget);
        sb_cantidadAscensores->setObjectName(QStringLiteral("sb_cantidadAscensores"));
        sb_cantidadAscensores->setMinimumSize(QSize(61, 20));
        sb_cantidadAscensores->setMaximumSize(QSize(61, 20));

        horizontalLayout->addWidget(sb_cantidadAscensores);


        horizontalLayout_8->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lb_tiempodeArranque = new QLabel(layoutWidget);
        lb_tiempodeArranque->setObjectName(QStringLiteral("lb_tiempodeArranque"));

        horizontalLayout_3->addWidget(lb_tiempodeArranque);

        sb_tiempodeArranque = new QSpinBox(layoutWidget);
        sb_tiempodeArranque->setObjectName(QStringLiteral("sb_tiempodeArranque"));
        sb_tiempodeArranque->setMinimumSize(QSize(61, 20));
        sb_tiempodeArranque->setMaximumSize(QSize(61, 20));

        horizontalLayout_3->addWidget(sb_tiempodeArranque);


        horizontalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lb_cantidadPisos = new QLabel(layoutWidget);
        lb_cantidadPisos->setObjectName(QStringLiteral("lb_cantidadPisos"));

        horizontalLayout_5->addWidget(lb_cantidadPisos);

        sb_cantidadPisos = new QSpinBox(layoutWidget);
        sb_cantidadPisos->setObjectName(QStringLiteral("sb_cantidadPisos"));
        sb_cantidadPisos->setMinimumSize(QSize(61, 20));
        sb_cantidadPisos->setMaximumSize(QSize(61, 20));

        horizontalLayout_5->addWidget(sb_cantidadPisos);


        horizontalLayout_8->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lb_capacidadAscensores = new QLabel(layoutWidget);
        lb_capacidadAscensores->setObjectName(QStringLiteral("lb_capacidadAscensores"));

        horizontalLayout_2->addWidget(lb_capacidadAscensores);

        sb_capacidadAscensores = new QSpinBox(layoutWidget);
        sb_capacidadAscensores->setObjectName(QStringLiteral("sb_capacidadAscensores"));
        sb_capacidadAscensores->setMinimumSize(QSize(61, 20));
        sb_capacidadAscensores->setMaximumSize(QSize(61, 20));

        horizontalLayout_2->addWidget(sb_capacidadAscensores);


        horizontalLayout_9->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lb_desplazamientoentrePisos = new QLabel(layoutWidget);
        lb_desplazamientoentrePisos->setObjectName(QStringLiteral("lb_desplazamientoentrePisos"));

        horizontalLayout_4->addWidget(lb_desplazamientoentrePisos);

        sb_desplazamientoentrePisos = new QSpinBox(layoutWidget);
        sb_desplazamientoentrePisos->setObjectName(QStringLiteral("sb_desplazamientoentrePisos"));
        sb_desplazamientoentrePisos->setMinimumSize(QSize(61, 20));
        sb_desplazamientoentrePisos->setMaximumSize(QSize(61, 20));

        horizontalLayout_4->addWidget(sb_desplazamientoentrePisos);


        horizontalLayout_9->addLayout(horizontalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_9);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(609, 95));
        groupBox_2->setMaximumSize(QSize(16777215, 95));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 20, 207, 52));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        lb_tEntradaAscensor = new QLabel(layoutWidget1);
        lb_tEntradaAscensor->setObjectName(QStringLiteral("lb_tEntradaAscensor"));

        horizontalLayout_10->addWidget(lb_tEntradaAscensor);

        sb_tEntradaAscensor = new QSpinBox(layoutWidget1);
        sb_tEntradaAscensor->setObjectName(QStringLiteral("sb_tEntradaAscensor"));
        sb_tEntradaAscensor->setMinimumSize(QSize(61, 20));
        sb_tEntradaAscensor->setMaximumSize(QSize(61, 20));

        horizontalLayout_10->addWidget(sb_tEntradaAscensor);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        lb_tSalidaAscensor = new QLabel(layoutWidget1);
        lb_tSalidaAscensor->setObjectName(QStringLiteral("lb_tSalidaAscensor"));

        horizontalLayout_11->addWidget(lb_tSalidaAscensor);

        sb_tSalidaAscensor = new QSpinBox(layoutWidget1);
        sb_tSalidaAscensor->setObjectName(QStringLiteral("sb_tSalidaAscensor"));
        sb_tSalidaAscensor->setMinimumSize(QSize(61, 20));
        sb_tSalidaAscensor->setMaximumSize(QSize(61, 20));

        horizontalLayout_11->addWidget(sb_tSalidaAscensor);


        verticalLayout_5->addLayout(horizontalLayout_11);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(609, 96));
        groupBox_3->setMaximumSize(QSize(16777215, 96));
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 40, 192, 22));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        lb_cantidadSimulacion = new QLabel(layoutWidget2);
        lb_cantidadSimulacion->setObjectName(QStringLiteral("lb_cantidadSimulacion"));

        horizontalLayout_12->addWidget(lb_cantidadSimulacion);

        sb_cantidadSimulacion = new QSpinBox(layoutWidget2);
        sb_cantidadSimulacion->setObjectName(QStringLiteral("sb_cantidadSimulacion"));
        sb_cantidadSimulacion->setMinimumSize(QSize(61, 20));
        sb_cantidadSimulacion->setMaximumSize(QSize(61, 20));

        horizontalLayout_12->addWidget(sb_cantidadSimulacion);


        verticalLayout_2->addWidget(groupBox_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pb_limpiarTodo = new QPushButton(tab);
        pb_limpiarTodo->setObjectName(QStringLiteral("pb_limpiarTodo"));

        horizontalLayout_6->addWidget(pb_limpiarTodo, 0, Qt::AlignRight|Qt::AlignTop);

        pb_iniciarSimulacion = new QPushButton(tab);
        pb_iniciarSimulacion->setObjectName(QStringLiteral("pb_iniciarSimulacion"));

        horizontalLayout_6->addWidget(pb_iniciarSimulacion, 0, Qt::AlignLeft|Qt::AlignTop);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_6->addLayout(verticalLayout_3);

        tw_simulacion->addTab(tab, QString());

        verticalLayout->addWidget(tw_simulacion);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 655, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tw_simulacion->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Variables de entrada ascensor", 0));
        lb_cantidadAscensores->setText(QApplication::translate("MainWindow", "Cantidad ascensores", 0));
        lb_tiempodeArranque->setText(QApplication::translate("MainWindow", "Tiempo de arranque", 0));
        lb_cantidadPisos->setText(QApplication::translate("MainWindow", "Cantidad de pisos", 0));
        lb_capacidadAscensores->setText(QApplication::translate("MainWindow", "Capacidad ascensores", 0));
        lb_desplazamientoentrePisos->setText(QApplication::translate("MainWindow", "Desplazamiento entre pisos", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Variables de entrada persona", 0));
        lb_tEntradaAscensor->setText(QApplication::translate("MainWindow", "Tiempo de entrada ascensor", 0));
        lb_tSalidaAscensor->setText(QApplication::translate("MainWindow", "Tiempo de salida ascensor", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Variables de entrada simulacion", 0));
        lb_cantidadSimulacion->setText(QApplication::translate("MainWindow", "Cantidad de simulaciones ", 0));
        pb_limpiarTodo->setText(QApplication::translate("MainWindow", "Limpiar todo", 0));
        pb_iniciarSimulacion->setText(QApplication::translate("MainWindow", "Iniciar", 0));
        tw_simulacion->setTabText(tw_simulacion->indexOf(tab), QApplication::translate("MainWindow", "Principal", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
