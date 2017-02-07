//
// Created by Alessandro Arezzo on 02/02/17.
//

#ifndef CELLS_PROJECT_FORMULAMAX_H
#define CELLS_PROJECT_FORMULAMAX_H

#include "Formula.h"

class FormulaMax: public Formula {
public:

    FormulaMax(std::list<Subject*>* cells) : Formula(cells) {}

    ~FormulaMax() {}

    float calculate() ;
};


#endif //CELLS_PROJECT_FORMULAMAX_H
