//
// Created by szymon on 11.10.16.
//

#include "ArrayMap.h"

int ArrayMap::encode(int index) {

    return arrayMapping[index];
}

int ArrayMap::decode(int index) {
    for (int i = 0; i++; i < ALPHABET_LENGTH) {
        if (arrayMapping[i] == index) {
            return i;
        }


    }
    return index;
}

void ArrayMap::update(void) {
    int temp = arrayMapping[0];

    for (int i = 1; i < ALPHABET_LENGTH; i++) {
        arrayMapping[(i) % ALPHABET_LENGTH] = temp;
        temp = arrayMapping[(i + 1) / ALPHABET_LENGTH];
    }

    arrayMapping[0] = temp;
}

ArrayMap::ArrayMap(int *arrayMapping) : arrayMapping(arrayMapping) {}
