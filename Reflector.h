//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_REFLECTOR_H
#define CENIGMA_SZ6315_REFLECTOR_H


#include "Alphabet.h"
#include "EnigmaPiece.h"

class Reflector : public EnigmaPiece {
private:
    const int mappingFunction(int x);

    const int inverseMapping(int x);

protected:
    int encode(int index) override;

    int substitute(int index) override;

    int decode(int index) override;

};


#endif //CENIGMA_SZ6315_REFLECTOR_H
