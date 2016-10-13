//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_ENIGMAPIECE_H
#define CENIGMA_SZ6315_ENIGMAPIECE_H


#include <memory>
#include "Alphabet.h"


class EnigmaPiece {

public:
    EnigmaPiece();

    void setNext(std::shared_ptr<EnigmaPiece> next);

    std::shared_ptr<EnigmaPiece> next;

    virtual void rotate();

    virtual void rotate(int previous_latch);

    virtual int substitute(int index);

    virtual int encode(int index);

    virtual int decode(int index);


};


#endif //CENIGMA_SZ6315_ENIGMAPIECE_H
