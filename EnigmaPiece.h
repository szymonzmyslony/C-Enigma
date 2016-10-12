//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_ENIGMAPIECE_H
#define CENIGMA_SZ6315_ENIGMAPIECE_H


#include "Alphabet.h"

class EnigmaPiece {
public:
    void setNext(EnigmaPiece *next);

    virtual int substitute(int index);


protected:
    EnigmaPiece* next;
    virtual void rotate();

    virtual void rotate(int previous_latch);

    Alphabet alphabet = *new Alphabet();

    virtual int encode(int index);

    virtual int decode(int index);


};


#endif //CENIGMA_SZ6315_ENIGMAPIECE_H
