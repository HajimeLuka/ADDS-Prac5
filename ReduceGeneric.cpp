#include "ReduceGeneric.h"
#include <iostream>

using namespace std;

ReduceGeneric::ReduceGeneric(){

}

int ReduceGeneric::reduce(vector<int> input){

    if (input.size()==0){
        return output;
    }

    if (count == input.size()){
        return output;
    }

    // else{
    //     res = reduce(input[count]);

    //     output.push_back(res);
    //     count++;

    //     return reduce(input);
    // }

    if (count == input.size()-1){
        res = binaryOperator(input[count], input[count-1]);
        count++;
        
    } 
    
    else {
        res = binaryOperator(input[count], input[count+1]);
        count = count + 2;
    }

    return reduce(input);


}