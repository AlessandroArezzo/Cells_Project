//
// Created by Alessandro Arezzo on 02/02/17.
//

#include "FormulaSum.h"
#include "Cell.h"

float FormulaSum::calculate() {
    float sum=0;
    if(cells->size()>0){
        for(auto itr=cells->begin();itr!=cells->end();itr++){
            sum+=dynamic_cast<Cell*>((*itr))->getValue();
        }
    }
    return sum;
}