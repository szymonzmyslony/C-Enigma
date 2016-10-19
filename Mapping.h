//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_MAPPING_H
#define CENIGMA_SZ6315_MAPPING_H


#include <map>
#include <vector>
#include "EnigmaPiece.h"

using namespace std;
/*
 * base class for rotor and plugboard as encoding for both are stored in maps *
 */

class Mapping : public EnigmaPiece {
protected:
    virtual int encode(const int index);
    virtual int decode(int index);
    vector<int> mapping;
    Mapping(vector<int> mapping);

};


#endif //CENIGMA_SZ6315_MAPPING_H
