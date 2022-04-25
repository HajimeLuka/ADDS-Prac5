#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector> 
using namespace std;

class FilterGeneric{
    public:
    FilterGeneric();
    vector<int> filter(vector<int> input);
    vector<int> output;
    
    int count=0;
    int res=0;
    
    private:
    bool virtual g(int)=0;
};
#endif