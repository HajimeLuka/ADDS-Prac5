#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H

#include "MapGeneric.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class MapTriple: public MapGeneric{
public:
    MapTriple();
    virtual int f(int input);

};

#endif