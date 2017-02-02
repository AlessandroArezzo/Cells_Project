//
// Created by Alessandro on 01/09/2016.
//

#include "Calculator.h"
//#include <typeinfo>

Calculator::Calculator():Observer(),max(0),min(0),sum(0),mean(0) {
    formulaMax=new FormulaMax(&cells);
    formulaMin=new FormulaMin(&cells);
    formulaSum=new FormulaSum(&cells);
    formulaMean=new FormulaMean(&cells);
}


void Calculator::subscribe(Subject *cell) {
    cells.push_back(cell);
    update();
}

void Calculator::unsubscribe(Subject *cell) {
    cells.remove(cell);
    update();
}

bool Calculator::update() {
    try {
        calculateMax();
        calculateMin();
        calculateSum();
        calculateMean();
        return true;
    }
    catch(std::bad_cast& ex){
        return false;
    }
}

void Calculator::calculateMax() {
    max=formulaMax->calculate();
}

void Calculator::calculateMin() {
    min=formulaMin->calculate();
}

void Calculator::calculateSum() {
    sum=formulaSum->calculate();
}

void Calculator::calculateMean() {
    mean=formulaMean->calculate();
}

