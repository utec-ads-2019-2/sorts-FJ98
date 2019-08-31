#ifndef SORT_H
#define SORT_H

#include<string>
#include <algorithm>

using namespace std;

class Sort {
    protected:
        int *array;
        size_t size;
        
    public:
        Sort(int *elements, size_t size) : array(elements), size(size) {}

        virtual void execute() = 0;

        virtual string name() = 0;
};

#endif