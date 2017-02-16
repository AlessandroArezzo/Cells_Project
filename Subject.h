//
// Created by Alessandro on 01/09/2016.
//

#ifndef CELLS_PROJECT_SUBJECT_H
#define CELLS_PROJECT_SUBJECT_H

#include <string>
#include <list>
#include "Observer.h"

class Subject {

public:

    Subject(){}
    virtual ~Subject(){}

    virtual void attach(Observer * formula)=0;
    virtual void detach(Observer * formula)=0;
    virtual void notify()=0;


};


#endif //CELLS_PROJECT_SUBJECT_H
