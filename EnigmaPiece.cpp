//
// Created by szymon on 10.10.16.
//

#include "EnigmaPiece.h"

void EnigmaPiece::setNext(std::shared_ptr<EnigmaPiece> next) {
    EnigmaPiece::next = next;
}

EnigmaPiece::EnigmaPiece() : next(nullptr) {}

void EnigmaPiece::rotate() {

}

void EnigmaPiece::rotate(int previous_latch) {

}


int EnigmaPiece::substitute(const int index) {
    return decode(next->substitute(encode(index)));
}

int EnigmaPiece::encode(int index) {
    return 0;
}

int EnigmaPiece::decode(int index) {
    return 0;
}

