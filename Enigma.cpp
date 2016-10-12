//
// Created by szymon on 11.10.16.
//

#include "Enigma.h"


char Enigma::encode(char given) {
    if (!isalpha(given)) {
        throw invalid_argument("received not alpha character");
    }
    bool isUpper = isupper(given);
    char toBeEncoded;
    toBeEncoded = tolower(given);
    int index = alphabet.getIndex(toBeEncoded);
    char encodedChar = alphabet.getCharacter(next.substitute(index));
    if (isUpper) {
        return toupper(encodedChar);
    }
    return encodedChar;
}


Enigma::Enigma(int **rotorsArray, map<int, int> *plugBoard, int numberOfRotors) {
    alphabet = *new Alphabet();
    shared_ptr<EnigmaPiece> current;
    shared_ptr<EnigmaPiece> previous;
    shared_ptr<EnigmaPiece> reflactor = new Reflector();
    if (plugBoard) {
        current = previous = new Plugboard(*plugBoard);
        this->setNext(*current);
    } else {
        current = previous = this;
    }
    if (numberOfRotors >= 1) {
        for (int i = 0; i < numberOfRotors; i++) {
            current = new Rotor(rotorsArray[i]);
            previous->setNext(*current);
            previous = current;
        }
    }
    previous->setNext(*reflactor);


}
