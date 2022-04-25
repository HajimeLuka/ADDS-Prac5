#include "MapAbsoluteValue.h"
#include <iostream>
#include <cstdlib>
using namespace std;

MapAbsoluteValue::MapAbsoluteValue():MapGeneric(){

}

int MapAbsoluteValue::f(int input){
    return abs(input);
}