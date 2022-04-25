 #ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;


class MapGeneric{
public:
    MapGeneric();
    // vector<int>;
    vector<int> map(vector<int> input);
    vector<int> output;

    int res=0;
    int count=0;


private:
    virtual int f(int) = 0; //pure virtual class declaration
};


#endif