#include <iostream>
#include <stdio.h>
#include "MapGeneric.h"
#include <vector>

using namespace std;

MapGeneric::MapGeneric(){
    res=0;
}

vector<int> MapGeneric::map(vector<int> input){

    // vector<int> Vect;

    if (input.size()==0){
        return output;
    }

    if (count == input.size()){
        return output;
    }

    else{
        res = f(input[count]);

        output.push_back(res);
        count++;

        // Vect.pop_back();

        return map(input);

    }

    // (vector<int>) = f(vector<int>);




}

