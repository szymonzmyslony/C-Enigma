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
    int temp = arrayMapping[1];
    for (int i = 1; i<array_length; i++){
        arrayMapping[i] = arrayMapping[i-1];
        temp = arrayMapping[i+1];
    }
    arrayMapping[array_length] = temp;

}
