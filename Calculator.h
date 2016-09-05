//
// Created by Alessandro on 01/09/2016.
//



#ifndef CELLS_PROJECT_CALCULATOR_H
#define CELLS_PROJECT_CALCULATOR_H

//#include "Cell.h"
#include <list>
#include "Observer.h"

class Cell;

class Calculator :public Observer{

public:

    Calculator();
    ~Calculator(){ }
    void subscribe(Subject* cell);
    void unsubscribe(Subject* cell);
    void update();

    void calculateMax();
    void calculateMin();
    void calculateSum();
    void calculateMean();

    bool searchCell(Subject* cell);


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

    const std::list<Subject *> &getCells() const {
        return cells;
    }

private:
    float max;
    float min;
    float sum;
    float mean;

    std::list<Subject*> cells;

};


#endif //CELLS_PROJECT_CALCULATOR_H
