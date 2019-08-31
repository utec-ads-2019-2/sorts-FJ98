#include <iostream>
#include <string>

#include "mocker.h"
#include "tester.h"

using namespace std;

#define NUMBER_OF_TESTS 1000


void executeTests();
//void printArray(int *, size_t);

int main(int argc, char* argv[]) {
    cout << "===========================================================" << endl;
    cout << "\tSorts Practice" << endl;
    cout << "===========================================================" << endl << endl;

    executeTests();

    return EXIT_SUCCESS;
}

void executeTests() {
    Mocker mocker;
    for (int i = 0; i < NUMBER_OF_TESTS; ++i) {
        size_t size = mocker.generateRandomInt();
        int *array = mocker.generateRandomIntArray(size);
        Tester::sorts(array, size);
        cout << "Passed test: " << i + 1 << endl;
    }
}

//void printArray(int *array, size_t size) {
//    for (int i = 0; i < static_cast<int>(size); i++) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}