#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include <QtCore>
#include "login.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    login w;
    w.show();





    return a.exec();
}
