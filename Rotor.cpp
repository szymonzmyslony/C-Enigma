//
// Created by szymon on 11.10.16.
//

#include "Rotor.h"

Rotor::Rotor(vector<int> map) : Mapping(map), latch_position(STARTING_POSITION_OF_ROTOR) {
    inverseMapping = *new vector<int>(ALPHABET_LENGTH);
    for (int i = 0; i<ALPHABET_LENGTH; i++){
        inverseMapping[mapping[i]]=i;
            }
}

int Rotor::encode(const int index) {
    int pin = (index + latch_position) % ALPHABET_LENGTH;
    int contact = mapping[pin];
    return ((contact - latch_position + ALPHABET_LENGTH) % ALPHABET_LENGTH);
}

int Rotor::decode(int index) {
    int contact = (index + latch_position) % ALPHABET_LENGTH;
    int pin = inverseMapping[contact];
    return ((pin - latch_position + ALPHABET_LENGTH) % ALPHABET_LENGTH);
}

void Rotor::rotate() {
    latch_position = ((latch_position + 1) % ALPHABET_LENGTH);
    next->rotate(latch_position);
}

void Rotor::rotate(int previous_latch) {
    if (previous_latch == STARTING_POSITION_OF_ROTOR) {
        rotate();
    }
}