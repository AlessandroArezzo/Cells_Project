//
// Created by Alessandro Arezzo on 02/02/17.
//

#ifndef CELLS_PROJECT_FORMULAMIN_H
#define CELLS_PROJECT_FORMULAMIN_H


#include "Formula.h"

class FormulaMin: public Formula {
public:

    FormulaMin() : Formula(),min(0) {}

    ~FormulaMin() {}

    void update() override ;

    float getMin() const {
        return min;
    }

private:
    float min;
};


#endif //CELLS_PROJECT_FORMULAMIN_H
