//
// Created by Alessandro Arezzo on 02/02/17.
//

#ifndef CELLS_PROJECT_FORMULAMEAN_H
#define CELLS_PROJECT_FORMULAMEAN_H


#include "Formula.h"

class FormulaMean: public Formula {
public:

    FormulaMean() : Formula(),mean(0) {}

    ~FormulaMean() {}

    void update() override ;

    float getMean() const {
        return mean;
    }

private:
    float mean;
};

#endif //CELLS_PROJECT_FORMULAMEAN_H
