#include <iostream>
#include <stdio.h>
#include <math.h>
#include "MapGeneric.h"
#include <vector>

using namespace std;

MapGeneric::MapGeneric(){

}

vector<int> MapGeneric::map(vector<int>){

    vector<int> Vect;
    int res = Vect;
    int x;

    if (Vect.size()==0){
        return Vect;
    }

    else{
        res = Vect[0];
        Vect = f(map);
    }

    vector<int>=f(vector<int>);

    return vector<int>;

}

