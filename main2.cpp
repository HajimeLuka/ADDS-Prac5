#include <iostream>
#include <vector>
#include <string>
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include <sstream>

using namespace std;

int main(){
    string input;

    vector<int> userInput;
    vector<int> resultVector;

    FilterGeneric* filterO = new FilterOdd();

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

    resultVector = filterO->filter(resultVector);

    cout<<"Odd: "<<endl;
    for(int i=0; i<resultVector.size(); i++){
        cout<<resultVector[i]<<endl;

    }


}