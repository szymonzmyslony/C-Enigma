//
// Created by szymon on 10.10.16.
//

#include "Alphabet.h"

const int Alphabet::getIndex(char character) {
    int index = character - FIRST_LETTER;
    return index;
}

const char Alphabet::getCharacter(int index) {
    char character = index + FIRST_LETTER;
    return character;
}


Alphabet::Alphabet() {}

