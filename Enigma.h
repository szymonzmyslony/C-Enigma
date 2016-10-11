//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_ENIGMA_H
#define CENIGMA_SZ6315_ENIGMA_H


#include "EnigmaPiece.h"
#include "Alphabet.h"
#include "Rotor.h"
#include "EnigmaPiece.h"
#include "Reflector.h"
#include "Plugboard.h"


class Enigma : EnigmaPiece {
public:
    char encode (char toBeEncodded);

private:
    Alphabet alphabet1;
    bool checkIt(char & character);







};


#endif //CENIGMA_SZ6315_ENIGMA_H
