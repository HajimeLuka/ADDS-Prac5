#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H

#include "ReduceGeneric.h"
#include <vector>

class ReduceMinimum: public ReduceGeneric{
    public:
    ReduceMinimum();
    virtual int binaryOperator(int input, int input2);

};

#endif

