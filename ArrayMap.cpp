//
// Created by szymon on 11.10.16.
//

#include "ArrayMap.h"

int ArrayMap::encode(int index) {
    //TODO
    return arrayMapping[index];
}

int ArrayMap::decode(int index) {
    return EnigmaPiece::decode(index);
}

void ArrayMap::update(void) {
    for (int i = 0; i < array_length; i++) {
        arrayMapping[i] = alphabet.shift(i);
    }
}
