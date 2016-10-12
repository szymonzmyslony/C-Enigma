//
// Created by szymon on 10.10.16.
//

#include "Alphabet.h"

const int &Alphabet::getIndex(char character) {
    return (character - FIRST_LETTER);

}

const char &Alphabet::getCharacter(int index) {
    char character = index;
    return character;
}

const int &Alphabet::shift(int index) {
    return ((index + SHIFT_POSITION) % (ALPHABET_LENGTH - 1));
}

