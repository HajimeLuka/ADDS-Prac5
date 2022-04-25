#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include "ReduceGeneric.h"

#include <vector>
using namespace std;

class ReduceGeneric{
    public:
    ReduceGeneric();
    int reduce(vector<int> input);
    int output;
    int res=0;
    int count=0;

    private:
    virtual int binaryOperator(int input, int input2) = 0; //declare pure virtual function


};
#endif
