//
// Created by Alessandro on 07/09/2016.
//

#include "gtest/gtest.h"

#include <QtTest/QtTest>
#include "FormulaMaxTests.h"

//QTEST_MAIN(FormulaMaxTests)


int main(int argc, char** argv) {

    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();

  /*  FormulaMaxTests test1;
    QTest::qExec(&test1, argc, argv);
    */
}
