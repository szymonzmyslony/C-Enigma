//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_ARRAYMAP_H
#define CENIGMA_SZ6315_ARRAYMAP_H


#include "EnigmaPiece.h"

class ArrayMap : public EnigmaPiece {
protected:
    int encode(int index);
    int decode(int index);
    void update(void);
    ArrayMap(int *arrayMapping);
    int *arrayMapping;
};


#endif //CENIGMA_SZ6315_ARRAYMAP_H
