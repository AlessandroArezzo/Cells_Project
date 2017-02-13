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
        if(dynamic_cast<Calculator*>(observer)->searchMax(this))
            detach("Max");
        if(dynamic_cast<Calculator*>(observer)->searchMin(this))
            detach("Min");
        if(dynamic_cast<Calculator*>(observer)->searchMean(this))
            detach("Mean");
        if(dynamic_cast<Calculator*>(observer)->searchSum(this))
            detach("Sum");
    }

    void attach(std::string formula) override ;
    void detach(std::string formula) override ;
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


    Observer *getObserver() const {
        return observer;
    }

    void setObserver(Observer *observer) {
        Cell::observer = observer;
    }

private:
    float value;
    Observer* observer;
    bool registred;

};


#endif //CELLS_PROJECT_CELL_H
