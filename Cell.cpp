//
// Created by Alessandro on 01/09/2016.
//

#include "Cell.h"

void Cell::attach(Observer * formula) {
    formule.push_back(formula);
    formula->subscribe(this);
}


void Cell::detach(Observer * formula) {
    formule.remove(formula);
    formula->unsubscribe(this);
}


void Cell::notify() {
    for (auto itr = formule.begin(); itr != formule.end(); itr++)
        (*itr)->update();
}
