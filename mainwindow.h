#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "Table.h"
#include "Formula.h"
#include "FormulaMax.h"
#include "FormulaMin.h"
#include "FormulaMean.h"
#include "FormulaSum.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void updateTextEdit();

private slots:
    void on_tableWidget_currentCellChanged(int currentRow, int currentColumn);

    void on_tableWidget_cellChanged(int row, int column);

    void on_addSumButton_clicked();

    void on_removeSumButton_clicked();

    void on_addMaxButton_clicked();

    void on_removeMaxButton_clicked();

    void on_addMinButton_clicked();

    void on_removeMinButton_clicked();

    void on_addMeanButton_clicked();

    void on_removeMeanButton_clicked();

private:
    Ui::MainWindow *ui;
    Table* table;

    Formula* formulaMax;
    Formula* formulaMin;
    Formula* formulaSum;
    Formula* formulaMean;
};


#endif // MAINWINDOW_H
