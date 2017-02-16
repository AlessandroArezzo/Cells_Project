//
// Created by Alessandro Arezzo on 02/02/17.
//

#include "FormulaMean.h"
#include "Cell.h"

void FormulaMean::calculate(){
    mean=0;
    float sum=0;
    if(cells.size()>0){
        for(auto itr=cells.begin();itr!=cells.end();itr++){
            sum+=dynamic_cast<Cell*>((*itr))->getValue();
        }
        mean=sum/cells.size();
    }
}