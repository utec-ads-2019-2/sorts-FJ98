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
                    if (elements[currItem] < elements[curMinTmp]) {
                        curMinTmp = currItem;
                    }
                }
                if (curMinTmp != curMin) {
                    std::swap(elements[curMinTmp],elements[curMin]);
                }
            }
        }

        inline string name() { return "SelectSort"; }
};

#endif