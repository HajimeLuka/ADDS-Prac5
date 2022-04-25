#include "FilterOdd.h"
#include <iostream>
#include <math.h>
using namespace std;

FilterOdd::FilterOdd():FilterGeneric(){

}

bool FilterOdd::g(int input){
    if (input % 2 != 0){
        return true;

    }
    else{
        return false;
    }
}