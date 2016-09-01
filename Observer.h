//
// Created by Alessandro on 01/09/2016.
//

#ifndef CELLS_PROJECT_OBSERVER_H
#define CELLS_PROJECT_OBSERVER_H

#include "Subject.h"

class Observer{

public:
    virtual void subscribe(Subject* cell)=0;
    virtual void unsubscribe(Subject* cell)=0;
    virtual void update()=0;
    

};

#endif //CELLS_PROJECT_OBSERVER_H