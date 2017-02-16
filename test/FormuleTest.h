//
// Created by Alessandro Arezzo on 07/02/17.
//

#ifndef CELLS_PROJECT_FORMULAMAXTESTS_H
#define CELLS_PROJECT_FORMULAMAXTESTS_H


#include "gtest/gtest.h"
#include "../Table.h"
#include "../FormulaSum.h"
#include "../FormulaMax.h"
#include "../FormulaMean.h"
#include "../FormulaMin.h"

class FormuleTest: public testing::Test{


protected:

    virtual void SetUp(){
        table=new Table(10,10);
        formulaSum=new FormulaSum;
        formulaMax=new FormulaMax;
        formulaMin=new FormulaMin;
        formulaMean=new FormulaMean;

        table->setCellValue(10.5,0,0);
        table->setCellValue(20.5,0,1);
        table->setCellValue(30,0,2);
        table->getCell(0,0)->attach(formulaSum);
        table->getCell(0,0)->attach(formulaMin); // Cella in posizione 0,0 iscritta a Sum e Min
        table->getCell(0,1)->attach(formulaMin);
        table->getCell(0,1)->attach(formulaMax);
        table->getCell(0,1)->attach(formulaMean);// Cella in posizione 0,1 iscritta a Min, Max e Mean
        table->getCell(0,2)->attach(formulaSum);
        table->getCell(0,2)->attach(formulaMin);
        table->getCell(0,2)->attach(formulaMean); // Cella in posizione 0,2 iscritta a Sum, Min e Mean

    }

    Formula* formulaSum;
    Formula* formulaMax;
    Formula* formulaMin;
    Formula* formulaMean;

    Table* table;

};

TEST_F(FormuleTest, FormulaMax){

    ASSERT_EQ(dynamic_cast<FormulaMax*>(formulaMax)->getMax(),20.5);
}

TEST_F(FormuleTest,FormulaMin){
    ASSERT_EQ(dynamic_cast<FormulaMin*>(formulaMin)->getMin(),10.5);
}

TEST_F(FormuleTest,FormulaMean){
    ASSERT_EQ(dynamic_cast<FormulaMean*>(formulaMean)->getMean(),((20.5+30)/2));
}

TEST_F(FormuleTest,FormulaSum){
    ASSERT_EQ(dynamic_cast<FormulaSum*>(formulaSum)->getSum(),40.5);
}


#endif //CELLS_PROJECT_FORMULAMAXTESTS_H
