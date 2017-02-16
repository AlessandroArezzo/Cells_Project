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

    virtual void update();
    void subscribe(Subject* cell)  ;
    void unsubscribe(Subject* cell)  ;

    bool searchCell(Subject* cell);

    virtual void calculate()=0;
protected:
    std::list<Subject*> cells;
};
#endif //CELLS_PROJECT_FORMULA_H
