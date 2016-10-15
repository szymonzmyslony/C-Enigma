//
// Created by szymon on 11.10.16.
//

#include "Enigma.h"


char Enigma::encodeCharacter(char given) {
    if (!isalpha(given)) {
        throw invalid_argument("received not alpha character");
    }
    bool isUpper = isupper(given);
    char toBeEncoded;
    toBeEncoded = tolower(given);
    int index = alphabet.getIndex(toBeEncoded);

    char encodedChar = alphabet.getCharacter(next->substitute(index));


    if (isUpper) {
        return toupper(encodedChar);
    }
    return encodedChar;
}


Enigma::Enigma(map<int, int> **rotorsArray, map<int, int> *plugBoard, int numberOfFiles) : EnigmaPiece() {
    alphabet = *new Alphabet();
    shared_ptr<EnigmaPiece> current(new EnigmaPiece());

    shared_ptr<EnigmaPiece> previous(new EnigmaPiece());



    if (numberOfFiles==1) {
        current.reset(new Plugboard(*plugBoard));
        this->setNext(current);
        previous=current;
        current.reset(new Reflector());
        previous->setNext(current);

    } else if (numberOfFiles==0){
        current.reset(new Reflector());
        this->setNext(current);
    }
    else {
        current.reset(new Plugboard(*plugBoard));
        this->setNext(current);
        previous=current;

        for (int i = 0; i < numberOfFiles-1; i++) {
            current.reset(new Rotor(*rotorsArray[i]));
            previous->setNext(current);
            previous = current;
        }
        current.reset(new Reflector);
        previous->setNext(current);

    }






}
