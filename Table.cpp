//
// Created by Alessandro on 01/09/2016.
//

#include "Table.h"


Table::Table(int row,int column):numRow(row),numColumn(column) {
    cells=new Cell[row*column];
    for(int i=0;i<row*column;i++)
        cells[i]=Cell();
}