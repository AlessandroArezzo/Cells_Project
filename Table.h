//
// Created by Alessandro on 01/09/2016.
//

#ifndef CELLS_PROJECT_TABLE_H
#define CELLS_PROJECT_TABLE_H

#include "Cell.h"
#include "Observer.h"

class Table {

public:
    Table(Observer* ob=nullptr, int row=0, int column=0);

    ~Table(){
        delete cells;
    }


    Cell * getCell(int row,int column) const {
        return &(cells[row*numColumn+column]);
    }

    void setCellValue(float value, int row,int column){
        cells[row*numColumn+column].setValue(value);
    }

private:
    Cell* cells;
    int numRow;
    int numColumn;

};


#endif //CELLS_PROJECT_TABLE_H
