#include <iostream>
#include <vector>
#include "FilterGeneric.h"

using namespace std;

FilterGeneric::FilterGeneric(){

}

vector<int> FilterGeneric::filter(vector<int> inputVec){

    if (count == inputVec.size()){
        return output;
    }

    res = g(inputVec[count]);

    if (res){
        output.push_back(inputVec[count]);
    }
    count++;

    return filter(inputVec);

}