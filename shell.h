#ifndef SHELL_H
#define SHELL_H

#include "sort.h"

class ShellSort : public Sort {       
    public:
        ShellSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() override {
            // TODO
            for (int gap = size/2; gap > 0; gap /= 2) {
                for (int j = gap; j < size; ++j) {
                    int k = j;
                    while (k >= gap && elements[k-gap] > elements[k]) {
                        std::swap(elements[k-gap], elements[k]);
                        k -= gap;
                    }
                }
            }
        }

        inline string name() override { return "ShellSort"; }
};

#endif