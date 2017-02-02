//
// Created by Alessandro Arezzo on 02/02/17.
//

#include "FormulaMean.h"
#include "Cell.h"

float FormulaMean::calculate() {
    float mean=0,sum=0;
    if(cells->size()>0){
        for(auto itr=cells->begin();itr!=cells->end();itr++){
            sum+=dynamic_cast<Cell*>((*itr))->getValue();
        }
        mean=sum/cells->size();
    }
    return mean;
}