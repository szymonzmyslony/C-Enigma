//
// Created by szymon on 11.10.16.
//

#include "Rotor.h"

Rotor::Rotor(map<int, int> map) : Mapping(map), locked(true), latch_position(STARTING_POSITION_OF_ROTOR) {

}

void Rotor::rotate() {

    next->rotate(latch_position);
    if (latch_position == ALPHABET_LENGTH) {
        latch_position = STARTING_POSITION_OF_ROTOR;
    } else {
        latch_position++;
    }
    update();
    locked = true;
}

void Rotor::rotate(int previous_latch) {
    if (previous_latch == latch_position && !locked) {
        this->rotate();
    } else {
        locked = true;
    }


}

