//
// Created by Alessandro Arezzo on 11/02/17.
//

#ifndef CELLS_PROJECT_CALCULATORTEST_H
#define CELLS_PROJECT_CALCULATORTEST_H


#include "gtest/gtest.h"

#include "../Calculator.h"
#include "../Cell.h"

class CalculatorTest: public testing::Test {


protected:

    virtual void SetUp(){
        c=new Calculator;
        firstCell=new Cell;
        secondCell=new Cell;
        thirdCell=new Cell;
        c->subscribe(firstCell);
        c->subscribe(secondCell);
        c->subscribe(thirdCell);
    }

    Calculator* c;
    Subject* firstCell;
    Subject* secondCell;
    Subject* thirdCell;
};


TEST_F(CalculatorTest, testSubscribe){
    ASSERT_EQ(firstCell, dynamic_cast<Cell*>(c->getCell(0)));
    ASSERT_EQ(secondCell, dynamic_cast<Cell*>(c->getCell(1)));
    ASSERT_EQ(thirdCell, dynamic_cast<Cell*>(c->getCell(2)));
}

TEST_F(CalculatorTest, testUnsubscribe){
    c->unsubscribe(secondCell);
    ASSERT_EQ(firstCell, dynamic_cast<Cell*>(c->getCell(0)));
    ASSERT_EQ(thirdCell, dynamic_cast<Cell*>(c->getCell(1)));
}

#endif //CELLS_PROJECT_CALCULATORTEST_H
