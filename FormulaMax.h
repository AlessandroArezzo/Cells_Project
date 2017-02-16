//
// Created by Alessandro Arezzo on 02/02/17.
//

#ifndef CELLS_PROJECT_FORMULAMAX_H
#define CELLS_PROJECT_FORMULAMAX_H

#include "Formula.h"

class FormulaMax: public Formula {
public:

    FormulaMax() : Formula(),max(0) { }

    ~FormulaMax() {}

    void update() override ;

    float getMax() const {
        return max;
    }


private:
    float max;
};


#endif //CELLS_PROJECT_FORMULAMAX_H
