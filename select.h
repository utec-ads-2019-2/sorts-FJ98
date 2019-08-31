#ifndef SELECT_H
#define SELECT_H

#include "sort.h"

class SelectSort : public Sort {       
    public:
        SelectSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() override {
            // TO DO
            for (size_t curMin = 0; curMin < size - 1; ++curMin) {
                size_t curMinTmp = curMin;
                for (size_t currItem = curMin + 1; currItem < size; ++currItem) {
                    if (array[currItem] < array[curMinTmp]) {
                        curMinTmp = currItem;
                    }
                }
                if (curMinTmp != curMin) {
                    std::swap(array[curMinTmp], array[curMin]);
                }
            }
        }

        inline string name() override { return "SelectSort"; }
};

#endif