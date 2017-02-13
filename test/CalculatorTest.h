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
        c->subscribe(firstCell,"Sum");
        c->subscribe(firstCell,"Mean"); //firstCell iscritta alle formule Sum e Mean
        c->subscribe(secondCell,"Sum");
        c->subscribe(secondCell,"Min"); //secondCell iscritta alle formule Sum e Min
        c->subscribe(thirdCell,"Sum");
        c->subscribe(thirdCell,"Max");
        c->subscribe(thirdCell,"Min"); //thirdCell iscritta alle formule Sum e Max e Min

    }

    Calculator* c;
    Subject* firstCell;
    Subject* secondCell;
    Subject* thirdCell;
};


TEST_F(CalculatorTest, testSubscribe){
    ASSERT_TRUE(c->searchSum(firstCell));
    ASSERT_TRUE(c->searchMean(firstCell));
    ASSERT_FALSE(c->searchMax(firstCell));
    ASSERT_FALSE(c->searchMin(firstCell));
    
    ASSERT_TRUE(c->searchSum(secondCell));
    ASSERT_TRUE(c->searchMin(secondCell));
    ASSERT_FALSE(c->searchMax(secondCell));
    ASSERT_FALSE(c->searchMean(secondCell));
    
    ASSERT_TRUE(c->searchSum(thirdCell));
    ASSERT_TRUE(c->searchMax(thirdCell));
    ASSERT_TRUE(c->searchMin(thirdCell));
    ASSERT_FALSE(c->searchMean(thirdCell));


}

TEST_F(CalculatorTest, testUnsubscribe){
    c->unsubscribe(firstCell,"Sum");
    c->unsubscribe(secondCell,"Min");
    c->unsubscribe(thirdCell,"Max");

    ASSERT_FALSE(c->searchSum(firstCell));
    ASSERT_TRUE(c->searchMean(firstCell));
    ASSERT_FALSE(c->searchMax(firstCell));
    ASSERT_FALSE(c->searchMin(firstCell));

    ASSERT_TRUE(c->searchSum(secondCell));
    ASSERT_FALSE(c->searchMin(secondCell));
    ASSERT_FALSE(c->searchMax(secondCell));
    ASSERT_FALSE(c->searchMean(secondCell));

    ASSERT_TRUE(c->searchSum(thirdCell));
    ASSERT_FALSE(c->searchMax(thirdCell));
    ASSERT_TRUE(c->searchMin(thirdCell));
    ASSERT_FALSE(c->searchMean(thirdCell));

}

#endif //CELLS_PROJECT_CALCULATORTEST_H
