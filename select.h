#ifndef SELECT_H
#define SELECT_H

#include "sort.h"

class SelectSort : public Sort {       
    public:
        SelectSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            // TODO
            for (int curMin = 0; curMin < size - 1; ++curMin) {
                int curMinTmp = curMin;
                for (int currItem = curMin + 1; currItem < size; ++currItem) {
                    if (array[currItem] < array[curMinTmp]) {
                        curMinTmp = currItem;
                    }
                }
                if (curMinTmp != curMin) {
                    std::swap(array[curMinTmp], array[curMin]);
                }
            }
        }

        inline string name() { return "SelectSort"; }
};

#endif