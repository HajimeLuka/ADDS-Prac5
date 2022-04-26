#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <vector>

using namespace std;

class FilterGeneric {
    public:


    FilterGeneric ();
    vector<int> filter(vector<int> inputVec);
    vector<int> output;

    bool res = false;
    int count = 0;

    private:
    virtual bool g(int input) = 0;
};

#endif
