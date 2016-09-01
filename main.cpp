#include "mainwindow.h"
#include <QApplication>
#include "Cell.h"
#include "Observer.h"
#include "Calculator.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
