//
// Created by Alessandro on 01/09/2016.
//

#include "Cell.h"

#include "Calculator.h"

Calculator::Calculator():Observer(),max(0),min(0),sum(0),mean(0) {
}


void Calculator::subscribe(Subject *cell) {
    cells.push_back(cell);
    update();
}

void Calculator::unsubscribe(Subject *cell) {
    cells.remove(cell);
    update();
}

void Calculator::update() {
    calculateMax();
    calculateMin();
    calculateSum();
    calculateMean();
}

void Calculator::calculateMax() {
    max=0;
    if(cells.size()>0){
        max= dynamic_cast<Cell*>(*(cells.begin()))->getValue();
        for(auto itr=cells.begin();itr!=cells.end();itr++){
            if(dynamic_cast<Cell*>((*itr))->getValue()>max)
                max=dynamic_cast<Cell*>((*itr))->getValue();
        }
    }
}

void Calculator::calculateMin() {
    min=0;
    if(cells.size()>0){
        min=dynamic_cast<Cell*>((*(cells.begin())))->getValue();
        for(auto itr=cells.begin();itr!=cells.end();itr++){
            if(dynamic_cast<Cell*>((*itr))->getValue()<min)
                min=dynamic_cast<Cell*>((*itr))->getValue();
        }
    }
}

void Calculator::calculateSum() {
    sum=0;
    if(cells.size()>0){
        for(auto itr=cells.begin();itr!=cells.end();itr++){
            sum+=dynamic_cast<Cell*>((*itr))->getValue();
        }
    }
}

void Calculator::calculateMean() {
    mean=0;
    if(cells.size()>0){
        calculateSum();
        mean=sum/cells.size();
    }
}

bool Calculator::searchCell(Subject* cell) {
    for(auto itr=cells.begin();itr!=cells.end();itr++){
        if(dynamic_cast<Cell*>(*itr)== dynamic_cast<Cell*>(cell))
            return true;
    }
    return false;
}
