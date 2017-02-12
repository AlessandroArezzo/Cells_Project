//
// Created by Alessandro Arezzo on 07/02/17.
//

#ifndef CELLS_PROJECT_FORMULAMAXTESTS_H
#define CELLS_PROJECT_FORMULAMAXTESTS_H


//#include <QtTest>
#include "gtest/gtest.h"
#include "../Table.h"


class FormuleTest: public testing::Test{


protected:
    virtual void SetUp(){
        table=new Table(10,10);
        table->setCellValue(10,0,0);
        table->setCellValue(20,0,1);
        c=new Calculator();
        c->subscribe(table->getCell(0,0));
        c->subscribe(table->getCell(0,1));
    }

    Calculator* c;
    Table* table;

};

TEST_F(FormuleTest, FormulaMax){

    c->calculateMax();
    ASSERT_EQ(c->getMax(),20);
}

TEST_F(FormuleTest,FormulaMin){
    c->calculateMin();
    ASSERT_EQ(c->getMin(),10);
}

TEST_F(FormuleTest,FormulaMean){
    c->calculateMean();
    ASSERT_EQ(c->getMean(),15);
}

TEST_F(FormuleTest,FormulaSum){
    c->calculateSum();
    ASSERT_EQ(c->getSum(),30);
}


/*class FormuleTest: public QObject{

private slots:

    void toUpper();

protected:

    Calculator* c;
    Table* table;
};
 */
#endif //CELLS_PROJECT_FORMULAMAXTESTS_H
