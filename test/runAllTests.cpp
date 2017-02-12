//
// Created by Alessandro on 07/09/2016.
//

#include "gtest/gtest.h"

//#include <QtTest/QtTest>
#include "FormuleTest.h"
#include "CalculatorTest.h"
#include "CellTest.h"

//QTEST_MAIN(FormuleTest)


int main(int argc, char** argv) {

    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();

  /*  FormuleTest test1;
    QTest::qExec(&test1, argc, argv);
    */
}
