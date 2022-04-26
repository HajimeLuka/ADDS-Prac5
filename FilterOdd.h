#ifndef FILTERODD_H
#define FILTERODD_H

#include "FilterGeneric.h"
using namespace std;

class FilterOdd: public FilterGeneric{
public:
    FilterOdd();
    virtual bool g(int input);
};

#endif