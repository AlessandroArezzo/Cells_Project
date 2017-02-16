//
// Created by Alessandro Arezzo on 02/02/17.
//

#ifndef CELLS_PROJECT_FORMULA_H
#define CELLS_PROJECT_FORMULA_H

#include <list>
#include "Observer.h"

class Formula: public Observer {

public:

    Formula(){ }

    virtual ~Formula(){}

    void subscribe(Subject* cell) override ;
    void unsubscribe(Subject* cell)  override ;

    bool searchCell(Subject* cell);

protected:
    std::list<Subject*> cells;
};
#endif //CELLS_PROJECT_FORMULA_H
