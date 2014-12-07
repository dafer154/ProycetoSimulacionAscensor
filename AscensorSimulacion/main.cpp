#include "mainwindow.h"
#include <QApplication>

// Comentado mientras no halla GUI

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}


//Para hacer cosas con consola mientras no hay GUI
//int main(){

  //  return 0;}

