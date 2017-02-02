//
// Created by Alessandro Arezzo on 02/02/17.
//

#ifndef CELLS_PROJECT_FORMULAMEAN_H
#define CELLS_PROJECT_FORMULAMEAN_H


#include "Formula.h"

class FormulaMean: public Formula {
public:

    FormulaMean(std::list<Subject*>* cells) : Formula(cells) {}

    ~FormulaMean() {}

    float calculate() override ;
};

#endif //CELLS_PROJECT_FORMULAMEAN_H
