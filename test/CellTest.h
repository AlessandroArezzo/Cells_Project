//
// Created by Alessandro Arezzo on 12/02/17.
//

#ifndef CELLS_PROJECT_CELLTEST_H
#define CELLS_PROJECT_CELLTEST_H

#include "gtest/gtest.h"

#include "../Cell.h"
#include "../Calculator.h"

class CellTest: public testing::Test{

protected:

    virtual void SetUp(){
        calculator=new Calculator;
    }

    Calculator* calculator;

};


TEST_F(CellTest,CellConstructor ){

    Cell cell(calculator);
    ASSERT_EQ(calculator, dynamic_cast<Calculator*>(cell.getObserver()));
}


TEST_F(CellTest,Attach){
    Cell* cell=new Cell(calculator);
    cell->attach();
    ASSERT_EQ(cell,calculator->getCell(0));
    ASSERT_TRUE(cell->isRegistred());
}

TEST_F(CellTest,Notify){

    Cell* cell=new Cell(calculator);
    cell->attach();
    ASSERT_EQ(0, dynamic_cast<Cell*>(calculator->getCell(0))->getValue());
    cell->setValue(10); //Il metodo set invoca Notify quindi si testa funzionamento del metodo Notify chiamando setValue
    ASSERT_EQ(10, dynamic_cast<Cell*>(calculator->getCell(0))->getValue());
}


#endif //CELLS_PROJECT_CELLTEST_H
