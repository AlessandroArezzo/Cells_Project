//
// Created by Alessandro on 01/09/2016.
//

#include "Cell.h"

void Cell::attach() {
    if(!registred) {
        observer->subscribe(this);
        registred=true;
    }
}


void Cell::detach() {
    if(registred) {
        observer->unsubscribe(this);
        registred=false;
    }
}


void Cell::notify() {
    observer->update();
}
