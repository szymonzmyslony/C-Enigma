//
// Created by szymon on 11.10.16.
//

#include "Plugboard.h"


Plugboard::Plugboard(map<int, int> map) : Mapping(map) {}


int Plugboard::substitute(int index) {
    update();
    next->rotate();
    return EnigmaPiece::substitute(index);
}

