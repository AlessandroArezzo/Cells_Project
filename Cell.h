//
// Created by Alessandro on 01/09/2016.
//

#ifndef CELLS_PROJECT_CELL_H
#define CELLS_PROJECT_CELL_H

#include "Subject.h"
#include "Calculator.h"
#include "ui_mainwindow.h"



class Cell :public Subject{

public:
    Cell(Observer* ob= nullptr):Subject(),value(0),observer(ob),registred(false){}

    ~Cell(){
        if(registred)
            detach();
    }

    void attach() override ;
    void detach() override ;
    void notify() override ;


    float getValue() const {
        return value;
    }

    void setValue(float value) {
        Cell::value = value;
        if(registred)
            notify();
    }

    bool isRegistred() const {
        return registred;
    }

private:
    float value;
    Observer* observer;
    bool registred;

};


#endif //CELLS_PROJECT_CELL_H
