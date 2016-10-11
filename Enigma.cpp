//
// Created by szymon on 11.10.16.
//

#include "Enigma.h"

char Enigma::encode(char toBeEncodded) {
    //CHECK FOR UPPERCASE DO IT IN ALPHABET
    int index = alphabet.getIndex(toBeEncodded);
    return alphabet.getCharacter(next.substitute(index));
}
