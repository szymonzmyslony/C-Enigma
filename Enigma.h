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
#include "Reflector.h"
#include "Plugboard.h"
#include <map>

class Enigma : public EnigmaPiece {

public:
    Enigma(vector<map<int, int>> *mapsArray, int numberOfFiles);

    char encodeCharacter(char toBeEncodded);

private:
    Alphabet alphabet;

public:
    Enigma(vector<map<int, int>> *rotorsArray, map<int, int> *plugBoard, int numberOfFiles);


};


#endif //CENIGMA_SZ6315_ENIGMA_H
