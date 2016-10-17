//
// Created by szymon on 11.10.16.
//

#include "Rotor.h"

Rotor::Rotor(map<int, int> map) : Mapping(map), latch_position(STARTING_POSITION_OF_ROTOR){
    std::map<int, int>::iterator it;
    for (it = map.begin(); it != map.end(); ++it) {
       inverseMapping.insert(make_pair(it->second, it->first));
    }
}

int Rotor::encode(const int index) {
    int pin = (index + latch_position)%ALPHABET_LENGTH;
    int contact = mapping.find(pin)->second;
    return ((contact-latch_position+ALPHABET_LENGTH)%ALPHABET_LENGTH);

}

int Rotor::decode(int index) {
     int contact = (index + latch_position)%ALPHABET_LENGTH;
     int pin = inverseMapping.find(contact)->second;
     return ((pin-latch_position+ALPHABET_LENGTH)%ALPHABET_LENGTH);
}

void Rotor::rotate() {
    latch_position = ((latch_position + 1) % ALPHABET_LENGTH);
    next->rotate(latch_position);
   }

void Rotor::rotate(int previous_latch) {
    if (previous_latch == STARTING_POSITION_OF_ROTOR) {
        rotate();
    } }