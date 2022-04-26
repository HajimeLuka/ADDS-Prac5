#include <iostream>
#include "ReduceMinimum.h"
#include <vector>

ReduceMinimum::ReduceMinimum():ReduceGeneric(){
    x="min";
}

int ReduceMinimum::binaryOperator(int input, int input2){

    if (input < input2){
        return input;
    } else {
        return input2;
    }
}
