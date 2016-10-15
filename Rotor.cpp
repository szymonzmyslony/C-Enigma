//
// Created by szymon on 11.10.16.
//

#include "Rotor.h"

Rotor::Rotor(map<int, int> map) : Mapping(map), locked(true), latch_position(STARTING_POSITION_OF_ROTOR) {

}

void Rotor::rotate() {
    next->rotate((latch_position+1)%ALPHABET_LENGTH);
    latch_position=(latch_position+1)%(ALPHABET_LENGTH);
    update();
  //  locked = true;
}

void Rotor::rotate(int previous_latch) {
    if (previous_latch == latch_position) {
        this->rotate();
    } else {

    }


}

