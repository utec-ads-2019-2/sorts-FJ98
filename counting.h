#ifndef COUNTING_H
#define COUNTING_H

#include "sort.h"
#include <algorithm>
#include <cstring>

class CountingSort : public Sort {       
    public:
        CountingSort(int *elements, size_t size) : Sort(elements, size) {}

        static void countingSort(int* array, int size){

            int range = *std::max_element(array,array + size);
            int counting[range + 1];
            std::memset(counting, 0, sizeof(counting)); // Init array with 0's.

            for (int i = 0; i < size; ++i) {
                ++counting[ array[i] ];
            }

            for (int j = 1; j <= range; ++j) {
                counting[j] += counting[j - 1];
            }

            int sorted[size];

            for (int k = size - 1; k >= 0; --k) {
                sorted[counting[ array[k] ] - 1 ] = array[k];
                --counting[ array[k] ];
            }

            for (int z = 0; z < size; ++z){
                array[z] = sorted[z];
            }

        }

        void execute() override {
            // TO DO
            countingSort(array, size);

        }

        inline string name() override { return "CountingSort"; }
};

#endif