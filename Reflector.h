//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_REFLECTOR_H
#define CENIGMA_SZ6315_REFLECTOR_H


#include "EnigmaPiece.h"

class Reflector : public EnigmaPiece {
private:
    const int mappingFunction(int x);
    int substitute(int index) override;
public:
    Reflector();

};


#endif //CENIGMA_SZ6315_REFLECTOR_H
