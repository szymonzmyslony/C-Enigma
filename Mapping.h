//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_MAPPING_H
#define CENIGMA_SZ6315_MAPPING_H


#include <map>
#include "EnigmaPiece.h"

using namespace std;


class Mapping : public EnigmaPiece {
protected:
    map<int, int> mapping;

    int encode(int index);

    int decode(int index);


};


#endif //CENIGMA_SZ6315_MAPPING_H
