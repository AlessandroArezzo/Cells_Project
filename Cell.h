//
// Created by Alessandro on 01/09/2016.
//

#ifndef CELLS_PROJECT_CELL_H
#define CELLS_PROJECT_CELL_H

#include "Subject.h"
#include "ui_mainwindow.h"


class Cell :public Subject{

public:
    Cell():Subject(),value(0) {}

    ~Cell(){
        for (auto itr = formule.begin(); itr != formule.end(); itr++)
            (*itr)->unsubscribe(this);
        for (auto itr = formule.begin(); itr != formule.end(); itr++)
            formule.remove((*itr));
    }

    void attach(Observer* formula) override ;
    void detach(Observer* formula) override ;
    void notify() override ;


    float getValue() const {
        return value;
    }

    void setValue(float value) {
        Cell::value = value;
        notify();
    }


private:
    float value;
    std::list<Observer*> formule;

};


#endif //CELLS_PROJECT_CELL_H
