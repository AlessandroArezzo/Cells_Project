#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "Cell.h"
#include "Calculator.h"
#include <list>
#include <algorithm>
#include "Table.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(Observer* ob=nullptr,QWidget *parent = 0);
    ~MainWindow();

    Cell* getCell(QTableWidgetItem* item);

    void updateTextEdit();

private slots:
    void on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

    void on_tableWidget_cellChanged(int row, int column);

    void on_addButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::MainWindow *ui;
    std::list<Cell*> cells;
    Observer* observer;
    Table* table;
};


#endif // MAINWINDOW_H
