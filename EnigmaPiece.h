//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_ENIGMAPIECE_H
#define CENIGMA_SZ6315_ENIGMAPIECE_H


#include "Alphabet.h"

class EnigmaPiece {
public:
    void setNext(const EnigmaPiece &next);
    void rotate();
    void rotate(int offset);
    virtual int substitute(int index);
protected:
    EnigmaPiece next;
    Alphabet alphabet;




};


#endif //CENIGMA_SZ6315_ENIGMAPIECE_H
