#ifndef RADIX_H
#define RADIX_H

#include "sort.h"
#include <cstring>

class RadixSort : public Sort {       
    public:
        RadixSort(int *elements, size_t size) : Sort(elements, size) {}

        static void countingSortDigits(int* array, int size, int digitDecimalSystem){

            int counting[10];
            std::memset(counting, 0, sizeof(counting));

            for (int i = 0; i < size; ++i) {
                ++counting[(array[i] / digitDecimalSystem) % 10 ];
            }

            for (int j = 1; j < 10; ++j) {
                counting[j] += counting[j - 1 ];
            }

            int sorted[size];

            for (int k = size - 1; k >= 0; --k) {
                sorted[counting[(array[k] / digitDecimalSystem) % 10 ] - 1 ] = array[k];
                --counting[(array[k] / digitDecimalSystem) % 10];
            }

            for (int z = 0; z < size; ++z) {
                array[z] = sorted[z];
            }

        }

        static void radixSort(int* array, int size) {

            int max = *std::max_element(array, array + size);
            int digitDecimalSystem = 1; // Hace referencia a la unidad en el sistema (unidad, decena, centena....)

            while (max > 0) {
                countingSortDigits(array, size, digitDecimalSystem);
                max /= 10;
                digitDecimalSystem *= 10;
            }

        }

        void execute() override {
            // TO DO
            radixSort(array, size);
        }

        inline string name() override { return "RadixSort"; }
};

#endif