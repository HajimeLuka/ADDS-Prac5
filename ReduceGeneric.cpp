#include "ReduceGeneric.h"
#include <iostream>
#include <string> 
#include <vector>

using namespace std;

ReduceGeneric::ReduceGeneric(){

}

int ReduceGeneric::reduce(vector<int> input, string x){


    if ((count == 0) && (x == "min")){
        output = 999999;
    }

    if ((count == 0) && (x == "gcd")){
        output = 0;
    }


    if (count == input.size()){
        return output;
    }



    if (count == input.size()-1){ //if counter is on the last element of the vectot
        res = binaryOperator(input[count], input[count-1]);
        count++;

    }

    else {
        res = binaryOperator(input[count], input[count+1]);
        count = count + 2; //add on 2 to count if not on last element
    }





    if (res < output && x == "min"){
        output = res;
    } else if (res > output && x == "gcd"){
        output = res;
    }


    return reduce(input, x);


}

