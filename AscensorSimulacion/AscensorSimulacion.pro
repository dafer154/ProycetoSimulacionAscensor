#-------------------------------------------------
#
# Project created by QtCreator 2014-11-29T23:44:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AscensorSimulacion
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    aleatorios.cpp \
    evento.cpp \
    lef.cpp \
    metodosauxiliares.cpp \
    mainsimulacion.cpp \
    controladoreventos.cpp \
    RandomGenerator/mersenne.cpp \
    RandomGenerator/mother.cpp

HEADERS  += mainwindow.h \
    aleatorios.h \
    evento.h \
    lef.h \
    metodosauxiliares.h \
    mainsimulacion.h \
    controladoreventos.h \
    RandomGenerator/randomc.h \
    ControladorEventos.h

FORMS    += mainwindow.ui
