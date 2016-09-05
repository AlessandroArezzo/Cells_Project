#include "mainwindow.h"

MainWindow::MainWindow(Observer* ob,QWidget *parent) :
    QMainWindow(parent),observer(ob),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    table=new Table(ob,ui->tableWidget->rowCount(),ui->tableWidget->columnCount());
    updateTextEdit();
}

MainWindow::~MainWindow()
{
    delete table;
    delete ui;
}

void MainWindow::on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    if(table->getCell(currentRow,currentColumn)->isRegistred()) {
        ui->addButton->setDisabled(true);
        ui->removeButton->setEnabled(true);
    }

    else{
        ui->addButton->setEnabled(true);
        ui->removeButton->setDisabled(true);
    }
}

void MainWindow::on_tableWidget_cellChanged(int row, int column)
{
    if(ui->tableWidget->currentItem()->text()==NULL)
        ui->tableWidget->currentItem()->setText("0");
    table->setCellValue(ui->tableWidget->currentItem()->text().toFloat(), row, column);
    updateTextEdit();
}

void MainWindow::on_addButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->attach();
    updateTextEdit();
}

void MainWindow::on_removeButton_clicked()
{
    table->getCell(ui->tableWidget->currentRow(), ui->tableWidget->currentColumn())->detach();
    updateTextEdit();
}

void MainWindow::updateTextEdit(){
    ui->textEdit->setText("MAX:"+QString::number(dynamic_cast<Calculator*>(observer)->getMax())+"\n"
        +"MIN:"+QString::number(dynamic_cast<Calculator*>(observer)->getMin())+"\n"
        +"SUM:"+QString::number(dynamic_cast<Calculator*>(observer)->getSum())+"\n"
        +"MEAN:"+QString::number(dynamic_cast<Calculator*>(observer)->getMean()));
}

