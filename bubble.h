#ifndef BUBBLE_H
#define BUBBLE_H

#include "sort.h"
#include <algorithm>

class BubbleSort : public Sort {       
    public:
        BubbleSort(int *elements, size_t size) : Sort(elements, size) {}

    void printArray(int *array, size_t size) {
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

        void execute() {
            // TODO
            for (int i = 0; i < size - 1; ++i) {
                for (int j = 0; j < size - 1 - i; ++j) {
                    if (elements[j] > elements[j+1]) {
                        std::swap(elements[j], elements[j+1]);
                    }
                }
            }

        }

        inline string name() { return "BubbleSort"; }
};

#endif