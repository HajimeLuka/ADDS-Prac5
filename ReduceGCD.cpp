#include "ReduceGCD.h"
#include <iostream>

ReduceGCD::ReduceGCD():ReduceGeneric(){

}

int ReduceGCD::binaryOperator(int input1, int input2){

    if (input1 == input2){
    return input2;
    }

    if (input1 == 0){
        return input1;
    }

    if (input2 == 0){
        return input2;
    }


    if (input1 > input2){
    return binaryOperator(input1-input2, input1);
    }

    else{
        return binaryOperator(input1, input2-input1);
    }


}

