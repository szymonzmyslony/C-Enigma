//
// Created by szymon on 10.10.16.
//

#include "Reflector.h"

const int Reflector::mappingFunction(int x) {
    return (x + 13) % 26;
}

const int Reflector::inverseMapping(int x) {
    return (26*x-13)%26;
}

int Reflector::substitute(int index) {

    return mappingFunction(index);
}

int Reflector::encode(int index) {
    return mappingFunction(index);
}

int Reflector::decode(int index) {
    return inverseMapping(index);
}

