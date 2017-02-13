//
// Created by Alessandro on 01/09/2016.
//

#include "Cell.h"

void Cell::attach(std::string formula) {
    if(formula=="Sum" || formula=="Mean" || formula=="Max" || formula=="Min") {
        if (observer != nullptr) {
            observer->subscribe(this, formula);
            registred = true;
        }
    }
}


void Cell::detach(std::string formula) {
    if(formula=="Sum" || formula=="Mean" || formula=="Max" || formula=="Min") {
        if (observer != nullptr) {
            observer->unsubscribe(this, formula);
            if(!dynamic_cast<Calculator*>(observer)->searchSum(this) && !dynamic_cast<Calculator*>(observer)->searchMax(this) && !dynamic_cast<Calculator*>(observer)->searchMin(this) && !dynamic_cast<Calculator*>(observer)->searchMean(this))
            registred = false;
        }
    }
}


void Cell::notify() {
    if(observer!= nullptr)
        observer->update();
}
