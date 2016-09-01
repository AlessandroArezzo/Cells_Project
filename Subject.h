//
// Created by Alessandro on 01/09/2016.
//

#ifndef CELLS_PROJECT_SUBJECT_H
#define CELLS_PROJECT_SUBJECT_H


class Subject {

public:
    virtual void attach()=0;
    virtual void detach()=0;
    virtual void notify()=0;


};


#endif //CELLS_PROJECT_SUBJECT_H
