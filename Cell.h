//
// Created by Alessandro on 01/09/2016.
//

#ifndef CELLS_PROJECT_CELL_H
#define CELLS_PROJECT_CELL_H

#include "Subject.h"
#include "Observer.h"
#include "ui_mainwindow.h"


class Cell :public Subject{

public:
    Cell(Observer* ob, QTableWidgetItem* cell):observer(ob),cellItem(cell){}

    void attach() override ;
    void detach() override ;
    void notify() override ;

    Observer *getObserver() const {
        return observer;
    }

    void setObserver(Observer *observer) {
        Cell::observer = observer;
    }

    bool isRegistred() const {
        return registred;
    }

    void setRegistred(bool registred) {
        Cell::registred = registred;
    }

    float getValue() const {
        return value;
    }

    void setValue(float value) {
        Cell::value = value;
        observer->update();
    }

    QTableWidgetItem *getCellItem() const {
        return cellItem;
    }

    void setCellItem(QTableWidgetItem *cellItem) {
        Cell::cellItem = cellItem;
    }

private:
    Observer* observer;
    QTableWidgetItem* cellItem;
    float value;
    bool registred; // attributo true se cella è registrata per il calcolo delle formule, altrimenti false.

};


#endif //CELLS_PROJECT_CELL_H
