//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_ENIGMA_H
#define CENIGMA_SZ6315_ENIGMA_H


#include <memory>
#include <vector>
#include "EnigmaPiece.h"
#include "Alphabet.h"
#include "Rotor.h"
#include "EnigmaPiece.h"
#include "Reflector.h"
#include "Plugboard.h"
#include <map>

class Enigma : EnigmaPiece {
public:
    char encode(char toBeEncodded);

private:
    Alphabet alphabet1;


public:
    Enigma(int **rotorsArray, map<int, int> *plugBoard, int numberOfRotros);


};


#endif //CENIGMA_SZ6315_ENIGMA_H
