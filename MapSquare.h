#ifndef MAPSQUARE_H
#define MAPSQUARE_H

#include "MapGeneric.h"

class MapSquare: public MapGeneric{
    public: 
    MapSquare();
    virtual int f(int input);
};

#endif