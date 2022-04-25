#include <iostream>
#include "MapSquare.h"
using namespace std;

MapSquare::MapSquare():MapGeneric(){
    
}

int MapSquare::f(int input){
    return input*input; 
}