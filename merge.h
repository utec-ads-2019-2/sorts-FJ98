#ifndef MERGE_H
#define MERGE_H

#include "sort.h"

class MergeSort : public Sort {       
    public:
        MergeSort(int *elements, size_t size) : Sort(elements, size) {}

        static void merge(int* array, int start, int middle, int end){

            int k = 0; int i = start; int j = middle + 1; int tam = end - start + 1;
            int* temp = new int[tam];

            while (i <= middle && j <= end) {
                if (array[i] < array[j]) {
                    temp[k] = array[i];
                    i++; k++;
                }else{
                    temp[k] = array[j];
                    j++; k++;
                }
            }

            while (i <= middle) {
                temp[k] = array[i];
                i++; k++;
            }

            while (j <= end) {
                temp[k] = array[j];
                j++; k++;
            }

            for (int l = 0; l < tam; ++l) {
                array[start + l] = temp[l];
            }

        }

        static void mergeSort(int* array, int start, int end){
            int middle = 0;
            if (start < end) {
                middle = start + (end - start) / 2;
                mergeSort(array, start, middle);
                mergeSort(array, middle + 1, end);
                merge(array, start, middle, end);
            }
        }

        void execute() override {
            // TODO
            mergeSort(array, 0, static_cast<int>(size) - 1);
        }

        inline string name() override { return "MergeSort"; }
};

#endif