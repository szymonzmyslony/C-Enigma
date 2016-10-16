//
// Created by szymon on 10.10.16.
//

#include "Reflector.h"

const int Reflector::mappingFunction(int x) {
    return (x + 13) % 26;
}

int Reflector::substitute(int index) {
    return mappingFunction(index);
}


Reflector::Reflector(){}
