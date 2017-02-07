//
// Created by Alessandro Arezzo on 02/02/17.
//

#ifndef CELLS_PROJECT_FORMULAMIN_H
#define CELLS_PROJECT_FORMULAMIN_H


#include "Formula.h"

class FormulaMin: public Formula {
public:

    FormulaMin(std::list<Subject*>* cells) : Formula(cells) {}

    ~FormulaMin() {}

    float calculate() ;
};


#endif //CELLS_PROJECT_FORMULAMIN_H
