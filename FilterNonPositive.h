#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H

#include "FilterGeneric.h"

class FilterNonPositive: public FilterGeneric{
    public:
    FilterNonPositive();
    virtual bool g(int input);

};

#endif