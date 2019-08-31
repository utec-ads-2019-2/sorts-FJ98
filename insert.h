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
                while (j >= 0 && array[j] > array[j + 1]) {
                    std::swap(array[j + 1], array[j]);
                    --j;
                }

            }
        }

        inline string name() { return "InsertSort"; }
};

#endif