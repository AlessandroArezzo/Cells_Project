//
// Created by Alessandro on 01/09/2016.
//

#include "Calculator.h"
//#include <typeinfo>

Calculator::Calculator():Observer(),max(0),min(0),sum(0),mean(0) {
    formulaMax=new FormulaMax(&cellsMax);
    formulaMin=new FormulaMin(&cellsMin);
    formulaSum=new FormulaSum(&cellsSum);
    formulaMean=new FormulaMean(&cellsMean);
}


bool Calculator::subscribe(Subject *cell,std::string formula) {
    std::list<Subject*>* cells;
    if(formula=="Sum")
        cells=&cellsSum;
    else if(formula=="Min")
        cells=&cellsMin;
    else if(formula=="Max")
        cells=&cellsMax;
    else if(formula=="Mean")
        cells=&cellsMean;
    else
        return false;
    (*cells).push_back(cell);
    update();
    return true;
}

bool Calculator::unsubscribe(Subject *cell,std::string formula) {
    std::list<Subject*>* cells;
    if(formula=="Sum")
        cells=&cellsSum;
    else if(formula=="Min")
        cells=&cellsMin;
    else if(formula=="Max")
        cells=&cellsMax;
    else if(formula=="Mean")
        cells=&cellsMean;
    else
        return false;
    (*cells).remove(cell);
    update();
    return true;
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

