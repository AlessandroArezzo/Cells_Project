//
// Created by Alessandro on 01/09/2016.
//

#ifndef CELLS_PROJECT_OBSERVER_H
#define CELLS_PROJECT_OBSERVER_H

#include "Subject.h"

class Observer{

public:

    Observer(){}

    virtual ~Observer(){}
    virtual bool subscribe(Subject* cell,std::string formula)=0;
    virtual bool unsubscribe(Subject* cell,std::string formula)=0;
    virtual bool update()=0;


};

#endif //CELLS_PROJECT_OBSERVER_H
