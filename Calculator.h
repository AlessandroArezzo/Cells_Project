//
// Created by Alessandro on 01/09/2016.
//



#ifndef CELLS_PROJECT_CALCULATOR_H
#define CELLS_PROJECT_CALCULATOR_H

#include <list>
#include "Observer.h"
#include "Cell.h"
#include <exception>
#include "Formula.h"
#include "FormulaMax.h"
#include "FormulaMin.h"
#include "FormulaSum.h"
#include "FormulaMean.h"

class Calculator :public Observer{

public:

    Calculator();
    ~Calculator(){ }
    void subscribe(Subject* cell);
    void unsubscribe(Subject* cell);
    bool update();

    void calculateMax();
    void calculateMin();
    void calculateSum();
    void calculateMean();


    float getMax() const {
        return max;
    }

    float getMin() const {
        return min;
    }


    float getMean() const {
        return mean;
    }

    float getSum() const {
        return sum;
    }

private:
    float max;
    float min;
    float sum;
    float mean;

    std::list<Subject*> cells;

    Formula* formulaMax;
    Formula* formulaMin;
    Formula* formulaSum;
    Formula* formulaMean;

};


#endif //CELLS_PROJECT_CALCULATOR_H
