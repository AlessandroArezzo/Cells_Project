#include "mainwindow.h"
#include <QApplication>
#include "Cell.h"
#include "Observer.h"
#include "Calculator.h"


int main(int argc, char *argv[])
{
    Observer* calculator=new Calculator();
    QApplication a(argc, argv);
    MainWindow w(calculator);
    w.show();

    return a.exec();
}
