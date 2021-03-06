//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_ENIGMAPIECE_H
#define CENIGMA_SZ6315_ENIGMAPIECE_H


#include <memory>
#include "Alphabet.h"

/*
 * base class for all other components - tells what methods are avaialble
 */

class EnigmaPiece {

protected:
    std::shared_ptr<EnigmaPiece> next;
public:
    virtual void rotate();
    virtual void rotate(int previous_latch);
    void setNext(std::shared_ptr<EnigmaPiece> next);
    virtual int substitute(int index);
    virtual int encode(int index);
    virtual int decode(int index);
};


#endif //CENIGMA_SZ6315_ENIGMAPIECE_H
