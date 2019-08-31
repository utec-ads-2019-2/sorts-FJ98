#ifndef QUICK_H
#define QUICK_H

#include "sort.h"

class QuickSort : public Sort {       
    public:
        QuickSort(int *elements, size_t size) : Sort(elements, size) {}

        int partition(int* A, int low, int high){
            int pivot = A[low], i = low, j = high;

            while (i < j) {
                do {
                    i = i + 1;
                } while (A[i] <= pivot);

                do {
                    j = j - 1;
                } while (A[j] > pivot);

                if (i < j) {
                    std::swap(A[i], A[j]);
                }
            }

            std::swap(pivot, A[j]);

            return j;
        }

//        int partition(int* A, int low, int high){
//            int pivot = A[low], left = low, j = high;
//
//            for (int i = low + 1; i <= high; ++i) {
//                if (A[i] < pivot) {
//                    std::swap(A[i], A[left]);
//                    ++left;
//                }
//            }
//
//            std::swap(pivot, A[left]);
//
//            return left;
//        }

        void quickSort(int* A, int low, int high){
            if (low < high) {
                int pivot = partition(A, low, high);
                quickSort(A, low, pivot);
                quickSort(A, pivot + 1, high);
            }
        }

        void execute() {
            // TODO
            quickSort(array, 0, size);
        }

        inline string name() { return "QuickSort"; }
};

#endif