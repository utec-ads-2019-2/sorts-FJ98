#ifndef MOCKER_H
#define MOCKER_H

#include <random>

using namespace std;

#define MIN 1
#define MAX 100

class Mocker {
    private:
        std::random_device device;
        std::mt19937 rng;
        
    public:
        Mocker() : rng(device()) {}

        int generateRandomInt();
        int* generateRandomIntArray(size_t);
};

#endif