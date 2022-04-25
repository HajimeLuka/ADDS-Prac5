#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H

#include "MapGeneric.h"
#include <vector>

using namespace std;

class MapAbsoluteValue: public MapGeneric{
    public:
    MapAbsoluteValue();
    virtual int f(int input);

};

#endif 