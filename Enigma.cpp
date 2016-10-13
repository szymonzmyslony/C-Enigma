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


Enigma::Enigma(map<int, int> *rotorsArray, map<int, int> plugBoard, int numberOfFiles):EnigmaPiece() {
    alphabet = *new Alphabet();
    shared_ptr<EnigmaPiece> current(new Plugboard(plugBoard));
    this->setNext(current);
   // shared_ptr<EnigmaPiece> previous;
    shared_ptr<EnigmaPiece> reflactor(new Reflector());


//    if (numberOfFiles==1) {
//        current.reset(new Plugboard(plugBoard));
//        this->setNext(current);
//        previous = current;
//
//    } else {
//       // current.reset(this);
//        //previous = current;
//    }
//    if (numberOfFiles > 1) {
//        for (int i = 0; i < numberOfFiles; i++) {
//            current.reset(new Rotor(rotorsArray[i]));
//            previous->setNext(current);
//            previous = current;
//        }
//    }



    current->setNext(reflactor);


}
