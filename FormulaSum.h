//
// Created by Alessandro Arezzo on 02/02/17.
//

#ifndef CELLS_PROJECT_FORMULASUM_H
#define CELLS_PROJECT_FORMULASUM_H

#include "Formula.h"

class FormulaSum: public Formula {
public:

    FormulaSum(std::list<Subject*>* cells) : Formula(cells) {}

    ~FormulaSum() {}

    float calculate() ;
};

#endif //CELLS_PROJECT_FORMULASUM_H
