//
// Created by Alessandro on 01/09/2016.
//


#include "Calculator.h"

Calculator::Calculator():max(0),min(0),sum(0),mean(0) {
}


void Calculator::subscribe(Subject *cell) {
    cells.push_back(cell);
}

void Calculator::unsubscribe(Subject *cell) {
    cells.remove(cell);
}

void Calculator::update() {
    calculateMax();
    calculateMin();
    calculateSum();
    calculateMean();
}

void Calculator::calculateMax() {
    max=0;
    if(cells.empty()){
        max= dynamic_cast<Cell*>(*(cells.begin()))->getValue();
        for(auto itr=cells.begin();itr!=cells.end();itr++){
            if(dynamic_cast<Cell*>((*itr))->getValue()>max)
                max=dynamic_cast<Cell*>((*itr))->getValue();
        }
    }
}

void Calculator::calculateMin() {
    min=0;
    if(cells.empty()){
        min=dynamic_cast<Cell*>((*(cells.begin())))->getValue();
        for(auto itr=cells.begin();itr!=cells.end();itr++){
            if(dynamic_cast<Cell*>((*itr))->getValue()<min)
                min=dynamic_cast<Cell*>((*itr))->getValue();
        }
    }
}

void Calculator::calculateSum() {
    sum=0;
    if(cells.empty()){
        for(auto itr=cells.begin();itr!=cells.end();itr++){
            sum+=dynamic_cast<Cell*>((*itr))->getValue();
        }
    }
}

void Calculator::calculateMean() {
    mean=0;
    if(cells.empty()){
        calculateSum();
        mean=sum/cells.size();
    }
}
