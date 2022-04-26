#include "FilterNonPositive.h"
#include "FilterGeneric.h"

#include <iostream>

FilterNonPositive::FilterNonPositive():FilterGeneric(){

}

bool FilterNonPositive::g(int input){
    if (input<0){
        return true;
    }

    else{
        return false;
    }
}