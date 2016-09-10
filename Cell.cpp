//
// Created by Alessandro on 01/09/2016.
//

#include "Cell.h"

void Cell::attach() {
    if(!registred && observer!= nullptr) {
        observer->subscribe(this);
        registred=true;
    }
}


void Cell::detach() {
    if(registred && observer!= nullptr) {
        observer->unsubscribe(this);
        registred=false;
    }
}


void Cell::notify() {
    if(observer!= nullptr)
        observer->update();
}
