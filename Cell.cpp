//
// Created by Alessandro on 01/09/2016.
//

#include "Cell.h"

void Cell::attach() {
    if(!registred){
        observer->subscribe(this);
        registred=true;
        notify(); //Se una cella viene aggiunta alla lista presente in Calculator allora i risultati delle formule devono essere aggiornati
    }

}

void Cell::detach() {
    if(registred){
        observer->unsubscribe(this);
        registred=false;
        notify(); //Se una cella viene rimossa dalla lista presente in Calculator allora i risultati delle formule devono essere aggiornati
    }
}

void Cell::notify() {
    observer->update();
}
