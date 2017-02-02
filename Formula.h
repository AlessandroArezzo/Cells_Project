//
// Created by Alessandro Arezzo on 02/02/17.
//

#ifndef CELLS_PROJECT_FORMULA_H
#define CELLS_PROJECT_FORMULA_H

#include "Subject.h"
#include <list>

class Formula{

public:

    Formula(std::list<Subject*>* cells):cells(cells){  }

    virtual ~Formula(){}
    virtual float calculate()=0;

protected:
    std::list<Subject*>* cells;
};
#endif //CELLS_PROJECT_FORMULA_H
