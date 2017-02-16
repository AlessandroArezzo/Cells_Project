//
// Created by Alessandro Arezzo on 15/02/17.
//

#include "Formula.h"


void Formula::subscribe(Subject *cell) {
    cells.push_back(cell);
    update();
}

void Formula::unsubscribe(Subject *cell) {
    cells.remove(cell);
    update();
}


bool Formula::searchCell(Subject *cell) {
    auto itr= std::find(cells.begin(),cells.end(),cell);
    if(itr!=cells.end())
        return true;
    return false;
}