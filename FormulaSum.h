//
// Created by Alessandro Arezzo on 02/02/17.
//

#ifndef CELLS_PROJECT_FORMULASUM_H
#define CELLS_PROJECT_FORMULASUM_H

#include "Formula.h"

class FormulaSum: public Formula {
public:

    FormulaSum() : Formula(),sum(0) {}

    ~FormulaSum() {}

    void calculate() override ;

    float getSum() const {
        return sum;
    }

private:
    float sum;
};

#endif //CELLS_PROJECT_FORMULASUM_H
