#include "FilterForTwoDigitPositive.h"
#include "FilterGeneric.h"
#include <iostream>
using namespace std;

FilterForTwoDigitPositive::FilterForTwoDigitPositive():FilterGeneric(){

}

bool FilterForTwoDigitPositive::g(int input){
    if((input>0)&&(input>9)&&(input<100)){
        return true;
    }
    else{
        return false;
    }
}