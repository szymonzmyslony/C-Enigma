//
// Created by szymon on 10.10.16.
//

#include "EnigmaPiece.h"

void EnigmaPiece::setNext(EnigmaPiece *next) {
    EnigmaPiece::next = next;


}


void EnigmaPiece::rotate() {
}

void EnigmaPiece::rotate(int previous_latch) {
}

int EnigmaPiece::substitute(const int index) {
    return decode(next->substitute(encode(index)));
}

