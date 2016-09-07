#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "Table.h"
#include "Observer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(Observer* ob=nullptr,QWidget *parent = 0);
    ~MainWindow();

    void updateTextEdit();

private slots:
    void on_tableWidget_currentCellChanged(int currentRow, int currentColumn);

    void on_tableWidget_cellChanged(int row, int column);

    void on_addButton_clicked();

    void on_removeButton_clicked();

private:
    Observer* observer;
    Ui::MainWindow *ui;
    Table* table;
};


#endif // MAINWINDOW_H
