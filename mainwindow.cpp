#include "mainwindow.h"
#include <string>

MainWindow::MainWindow(Observer* ob,QWidget *parent) :
    QMainWindow(parent),observer(ob),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect( this->ui->addButton, SIGNAL( clicked() ), this, SLOT(addButton_clicked(QString)) );
    table=new Table(ui->tableWidget->rowCount(),ui->tableWidget->columnCount(),observer);
    updateTextEdit();
}

MainWindow::~MainWindow()
{
    delete table;
    delete ui;
}

void MainWindow::on_tableWidget_currentCellChanged(int currentRow, int currentColumn)
{
    if(dynamic_cast<Calculator*>(observer)->searchSum(table->getCell(currentRow,currentColumn))) {
        ui->addSumButton->setDisabled(true);
        ui->removeSumButton->setEnabled(true);
    }
    else{
        ui->addSumButton->setEnabled(true);
        ui->removeSumButton->setDisabled(true);
    }
    if(dynamic_cast<Calculator*>(observer)->searchMax(table->getCell(currentRow,currentColumn))) {
        ui->addMaxButton->setDisabled(true);
        ui->removeMaxButton->setEnabled(true);
    }
    else{
        ui->addMaxButton->setEnabled(true);
        ui->removeMaxButton->setDisabled(true);
    }
    if(dynamic_cast<Calculator*>(observer)->searchMin(table->getCell(currentRow,currentColumn))) {
        ui->addMinButton->setDisabled(true);
        ui->removeMinButton->setEnabled(true);
    }
    else{
        ui->addMinButton->setEnabled(true);
        ui->removeMinButton->setDisabled(true);
    }
    if(dynamic_cast<Calculator*>(observer)->searchMean(table->getCell(currentRow,currentColumn))) {
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
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->attach("Sum");
    updateTextEdit();
}

void MainWindow::on_removeSumButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->detach("Sum");
    updateTextEdit();
}

void MainWindow::updateTextEdit(){

    ui->textEdit->setText("MAX:"+QString::number(dynamic_cast<Calculator*>(observer)->getMax())+"\n"
        +"MIN:"+QString::number(dynamic_cast<Calculator*>(observer)->getMin())+"\n"
        +"SUM:"+QString::number(dynamic_cast<Calculator*>(observer)->getSum())+"\n"
        +"MEAN:"+QString::number(dynamic_cast<Calculator*>(observer)->getMean()));
}



void MainWindow::on_addMaxButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->attach("Max");
    updateTextEdit();
}

void MainWindow::on_removeMaxButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->detach("Max");
    updateTextEdit();
}

void MainWindow::on_addMinButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->attach("Min");
    updateTextEdit();
}

void MainWindow::on_removeMinButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->detach("Min");
    updateTextEdit();
}

void MainWindow::on_addMeanButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->attach("Mean");
    updateTextEdit();
}

void MainWindow::on_removeMeanButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->detach("Mean");
    updateTextEdit();
}
