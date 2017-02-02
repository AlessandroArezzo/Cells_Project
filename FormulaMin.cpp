//
// Created by Alessandro Arezzo on 02/02/17.
//

#include "FormulaMin.h"
#include "Cell.h"
float FormulaMin::calculate() {
    float min=0;
    if(cells->size()>0){
        min=dynamic_cast<Cell*>((*(cells->begin())))->getValue();
        for(auto itr=cells->begin();itr!=cells->end();itr++){
            if(dynamic_cast<Cell*>((*itr))->getValue()<min)
                min=dynamic_cast<Cell*>((*itr))->getValue();
        }
    }

    return min;
}