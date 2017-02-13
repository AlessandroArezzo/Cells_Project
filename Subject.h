//
// Created by Alessandro on 01/09/2016.
//

#ifndef CELLS_PROJECT_SUBJECT_H
#define CELLS_PROJECT_SUBJECT_H

#include <string>

class Subject {

public:

    Subject(){}
    virtual ~Subject(){}

    virtual void attach(std::string formula)=0;
    virtual void detach(std::string formula)=0;
    virtual void notify()=0;



};


#endif //CELLS_PROJECT_SUBJECT_H
