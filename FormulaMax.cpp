//
// Created by Alessandro Arezzo on 02/02/17.
//

#include "FormulaMax.h"
#include "Cell.h"

void FormulaMax::calculate() {
    max=0;
    if(cells.size()>0){
        max = dynamic_cast<Cell *>(*(cells.begin()))->getValue();
        for (auto itr = cells.begin(); itr != cells.end(); itr++) {
            if (dynamic_cast<Cell *>((*itr))->getValue() > max)
                max = dynamic_cast<Cell *>((*itr))->getValue();
        }
    }
}