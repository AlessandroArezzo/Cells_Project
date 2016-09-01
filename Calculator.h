//
// Created by Alessandro on 01/09/2016.
//



#ifndef CELLS_PROJECT_CALCULATOR_H
#define CELLS_PROJECT_CALCULATOR_H

#include <list>
#include "Observer.h"
#include "Cell.h"

class Calculator :public Observer{

public:

    Calculator();
    virtual void subscribe(Subject* cell);
    virtual void unsubscribe(Subject* cell);
    virtual void update();

    void calculateMax();
    void calculateMin();
    void calculateSum();
    void calculateMean();

private:
    float max;
    float min;
    float sum;
    float mean;

    std::list<Subject*> cells;

};


#endif //CELLS_PROJECT_CALCULATOR_H
