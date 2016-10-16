//
// Created by szymon on 11.10.16.
//

#include "Plugboard.h"


Plugboard::Plugboard(map<int, int> map) : Mapping(map), has_it_started(true) {}

int Plugboard::substitute(int index) {
    if (has_it_started){
        has_it_started = false;
        return EnigmaPiece::substitute(index);
    }
    else{
        next->rotate();
        return EnigmaPiece::substitute(index);
    }
}
