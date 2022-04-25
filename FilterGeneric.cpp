#include <iostream>
#include <vector>
#include "FilterGeneric.h"

using namespace std;

FilterGeneric::FilterGeneric(){

}

vector<int> FilterGeneric::filter(vector<int> input){
        // vector<int> Vect;

    if (input.size()==0){
        return output;
    }

    if (count == input.size()){
        return output;
    }

    else{
        res = g(input[count]);

        output.push_back(res);
        count++;

        // Vect.pop_back();

        return filter(input);
    }

}