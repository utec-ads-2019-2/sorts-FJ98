#ifndef BUBBLE_H
#define BUBBLE_H

#include "sort.h"
#include<iostream>
#include <algorithm>
using namespace std;

class BubbleSort : public Sort {       
    public:
        BubbleSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() override {
            // TO DO
            for (int i = 0; i < static_cast<int>(size) - 1; ++i) {
                for (int j = 0; j < static_cast<int>(size - 1 - i); ++j) {
                    if (array[j] > array[j + 1]) {
                        std::swap(array[j], array[j + 1]);
                    }
                }
            }

        }

        inline string name() override { return "BubbleSort"; }
};

#endif