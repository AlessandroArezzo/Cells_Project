//
// Created by Alessandro on 01/09/2016.
//



#ifndef CELLS_PROJECT_CALCULATOR_H
#define CELLS_PROJECT_CALCULATOR_H

#include <list>
#include "Observer.h"
//#include "Cell.h"
#include <exception>
#include "Formula.h"
#include "FormulaMax.h"
#include "FormulaMin.h"
#include "FormulaSum.h"
#include "FormulaMean.h"
#include <string>
#include <algorithm>

class Calculator :public Observer{

public:

    Calculator();
    ~Calculator(){ }
    bool subscribe(Subject* cell,std::string formula) override ;
    bool unsubscribe(Subject* cell,std::string formula) override;
    bool update() override;

    void calculateMax();
    void calculateMin();
    void calculateSum();
    void calculateMean();

   /* Subject* getCell(int pos, std::string formula){
        std::list<Subject*>* cells;
        if(formula=="Sum")
            cells=&cellsSum;
        else if(formula=="Min")
            cells=&cellsMin;
        else if(formula=="Max")
            cells=&cellsMax;
        else if(formula=="Mean")
            cells=&cellsMean;
        else
            return nullptr;
        auto itr=(*cells).begin();
        if(pos<=(*cells).size()) {
            for (int i = 0; i < pos;i++)
                itr++;
        }
        return *itr;
    }
*/
    float getMax() const {
        return max;
    }

    float getMin() const {
        return min;
    }

    float getMean() const {
        return mean;
    }

    float getSum() const {
        return sum;
    }

    bool searchMax(Subject* cell){
        auto itr= std::find(cellsMax.begin(),cellsMax.end(),cell);
        if(itr!=cellsMax.end())
            return true;
        return false;
    }

    bool searchMin(Subject* cell){
        auto itr= std::find(cellsMin.begin(),cellsMin.end(),cell);
        if(itr!=cellsMin.end())
            return true;
        return false;
    }

    bool searchMean(Subject* cell){
        auto itr= std::find(cellsMean.begin(),cellsMean.end(),cell);
        if(itr!=cellsMean.end())
            return true;
        return false;
    }

    bool searchSum(Subject* cell){
        auto itr= std::find(cellsSum.begin(),cellsSum.end(),cell);
        if(itr!=cellsSum.end())
            return true;
        return false;
    }

private:
    float max;
    float min;
    float sum;
    float mean;

    std::list<Subject*> cellsMax;
    std::list<Subject*> cellsMin;
    std::list<Subject*> cellsSum;
    std::list<Subject*> cellsMean;


    Formula* formulaMax;
    Formula* formulaMin;
    Formula* formulaSum;
    Formula* formulaMean;

};


#endif //CELLS_PROJECT_CALCULATOR_H
