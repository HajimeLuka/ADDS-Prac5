#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"

#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"

using namespace std;

int main(){
    string input;

    vector<int> userInput;
    vector<int> resultVector;

    //create map objects
    MapGeneric* mapT = new MapTriple();
    MapGeneric* mapA = new MapAbsoluteValue();
    MapGeneric* mapS = new MapSquare();

    //create filter objects
    FilterGeneric* filterO = new FilterOdd();
    FilterGeneric* filterNP = new FilterNonPositive();
    FilterGeneric* filterTDP = new FilterForTwoDigitPositive();

    //get input from user
    cout<<"Enter numbers:";
    getline(cin, input);
    stringstream str_strm;

    str_strm << input;
    string temporaryStr;

    // add numbers to vector
    int temporaryInt;
    while(!str_strm.eof()) {
        str_strm >> temporaryStr;
        if(stringstream(temporaryStr) >> temporaryInt) {
            userInput.push_back(temporaryInt);
        }


        temporaryStr = "";

    }

    // resultVector = mapT->map(userInput);
    // cout<<"Triple: "<<endl;


    // resultVector = mapA->map(userInput);
    // cout<<"Absolute: "<<endl;



    // resultVector = mapS->map(userInput);
    // cout<<"Square: "<<endl;


    // for(int i=0; i<resultVector.size(); i++){
    //     cout<<resultVector[i]<<endl;
    // }


    // resultVector = filterO->filter(userInput);
    // cout<<"filter odd: "<<endl;

    // resultVector = filterNP->filter(userInput);
    // cout<<"filter non-positive"<<endl;

    resultVector = filterTDP->filter(userInput);
    cout<<"filter two digit positive"<<endl;


    for(int i=0; i<resultVector.size(); i++){
        if (resultVector[i]==1){
            cout<<userInput[i]<<endl;

        }
    }



    // cout<<resultVector[2];

    return 0;
}

