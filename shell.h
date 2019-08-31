#ifndef SHELL_H
#define SHELL_H

#include "sort.h"

class ShellSort : public Sort {       
    public:
        ShellSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() override {
            // TO DO
            for (int gap = static_cast<int>(size) / 2; gap > 0; gap /= 2) {
                for (int j = gap; j < static_cast<int>(size); ++j) {
                    int k = j;
                    while (k >= gap && array[k - gap] > array[k]) {
                        std::swap(array[k - gap], array[k]);
                        k -= gap;
                    }
                }
            }
        }

        inline string name() override { return "ShellSort"; }
};

#endif