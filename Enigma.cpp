//
// Created by szymon on 11.10.16.
//

#include "Enigma.h"


char Enigma::encodeCharacter(char given) {
    if (!isalpha(given) || !isupper(given)) {
        throw invalid_argument("received not alpha character");
    }
    char toBeEncoded = tolower(given);
    int index = alphabet.getIndex(toBeEncoded);
    char encodedChar = alphabet.getCharacter(next->substitute(index));
    return toupper(encodedChar);
}

Enigma::Enigma(vector<vector<int>> *mapsArray, int numberOfFiles) {
    alphabet = *new Alphabet();
    shared_ptr<EnigmaPiece> current(new EnigmaPiece());
    shared_ptr<EnigmaPiece> previous(new EnigmaPiece());
    if (numberOfFiles == 0) {
        current.reset(new Reflector());
        this->setNext(current);
    } else if (numberOfFiles == 1) {
        current.reset(new Plugboard(mapsArray->front()));
        this->setNext(current);
        previous = current;
        current.reset(new Reflector());
        previous->setNext(current);
    } else {
        current.reset(new Plugboard(mapsArray->front()));
        this->setNext(current);
        previous = current;
        vector<vector<int>>::iterator it = mapsArray->begin();
        it++;
        for (it; it != mapsArray->end(); ++it) {
            current.reset(new Rotor(*it));
            previous->setNext(current);
            previous = current;
        }
        current.reset(new Reflector);
        previous->setNext(current);
    }
}
