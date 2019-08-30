#ifndef INSERT_H
#define INSERT_H

#include "sort.h"

class InsertSort : public Sort {       
    public:
        InsertSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            // TODO
            for (int i = 1; i < size; ++i) {
                int j = i - 1;
                while (j >= 0 && elements[j] > elements[j+1]) {
                    std::swap(elements[j+1], elements[j]);
                    --j;
                }

            }
        }

        inline string name() { return "InsertSort"; }
};

#endif