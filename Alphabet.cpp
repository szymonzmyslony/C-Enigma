//
// Created by szymon on 10.10.16.
//

#include "Alphabet.h"

const int &Alphabet::getIndex(char character) {
    int index = character;
    return index;

}

const char &Alphabet::getCharacter(int index) {
    char character = index;
    return character;


}

const int &Alphabet::shift(int index) {
    return ((index+SHIFT_POSITION)%ALPHABET_LENGTH);
}




