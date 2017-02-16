#include "mainwindow.h"
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    table=new Table(ui->tableWidget->rowCount(),ui->tableWidget->columnCount());
    formulaMax=new FormulaMax();
    formulaMin=new FormulaMin();
    formulaSum=new FormulaSum();
    formulaMean=new FormulaMean();
    updateTextEdit();
}

MainWindow::~MainWindow()
{
    delete table;
    delete ui;
}

void MainWindow::on_tableWidget_currentCellChanged(int currentRow, int currentColumn)
{
    if(formulaSum->searchCell(table->getCell(currentRow,currentColumn))) {
        ui->addSumButton->setDisabled(true);
        ui->removeSumButton->setEnabled(true);
    }
    else{
        ui->addSumButton->setEnabled(true);
        ui->removeSumButton->setDisabled(true);
    }
    if(formulaMax->searchCell(table->getCell(currentRow,currentColumn))) {
        ui->addMaxButton->setDisabled(true);
        ui->removeMaxButton->setEnabled(true);
    }
    else{
        ui->addMaxButton->setEnabled(true);
        ui->removeMaxButton->setDisabled(true);
    }
    if(formulaMin->searchCell(table->getCell(currentRow,currentColumn))) {
        ui->addMinButton->setDisabled(true);
        ui->removeMinButton->setEnabled(true);
    }
    else{
        ui->addMinButton->setEnabled(true);
        ui->removeMinButton->setDisabled(true);
    }
    if(formulaMean->searchCell(table->getCell(currentRow,currentColumn))) {
        ui->addMeanButton->setDisabled(true);
        ui->removeMeanButton->setEnabled(true);
    }
    else{
        ui->addMeanButton->setEnabled(true);
        ui->removeMeanButton->setDisabled(true);
    }
}

void MainWindow::on_tableWidget_cellChanged(int row, int column)
{
    if(ui->tableWidget->currentItem()->text()==NULL)
        ui->tableWidget->currentItem()->setText("0");
    bool verify;
    float value=ui->tableWidget->currentItem()->text().toFloat(&verify);
    if(verify){
        table->setCellValue(value, row, column);
        updateTextEdit();
    }
    else
        ui->tableWidget->currentItem()->setText(QString::number(table->getCell(ui->tableWidget->currentRow(),ui->tableWidget->currentColumn())->getValue()));
}

void MainWindow::on_addSumButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->attach(formulaSum);
    updateTextEdit();
}

void MainWindow::on_removeSumButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->detach(formulaSum);
    updateTextEdit();
}


void MainWindow::on_addMaxButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->attach(formulaMax);
    updateTextEdit();
}

void MainWindow::on_removeMaxButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->detach(formulaMax);
    updateTextEdit();
}

void MainWindow::on_addMinButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->attach(formulaMin);
    updateTextEdit();
}

void MainWindow::on_removeMinButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->detach(formulaMin);
    updateTextEdit();
}

void MainWindow::on_addMeanButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->attach(formulaMean);
    updateTextEdit();
}

void MainWindow::on_removeMeanButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->detach(formulaMean);
    updateTextEdit();
}


void MainWindow::updateTextEdit(){

    ui->textEdit->setText("MAX:"+QString::number(dynamic_cast<FormulaMax*>(formulaMax)->getMax())+"\n"
                          +"MIN:"+QString::number(dynamic_cast<FormulaMin*>(formulaMin)->getMin())+"\n"
                          +"SUM:"+QString::number(dynamic_cast<FormulaSum*>(formulaSum)->getSum())+"\n"
                          +"MEAN:"+QString::number(dynamic_cast<FormulaMean*>(formulaMean)->getMean()));
}
