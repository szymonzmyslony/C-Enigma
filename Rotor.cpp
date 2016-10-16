//
// Created by szymon on 11.10.16.
//

#include "Rotor.h"

Rotor::Rotor(map<int, int> map) : Mapping(map), latch_position(STARTING_POSITION_OF_ROTOR), locked(true) {
}

void Rotor::rotate() {
    latch_position = ((latch_position + 1) % ALPHABET_LENGTH);
    next->rotate(latch_position);
    update();
    locked = true;
}

void Rotor::rotate(int previous_latch) {
    if (previous_latch == latch_position && !locked) {
        rotate();
    } else {
        locked = false;
    }
}

