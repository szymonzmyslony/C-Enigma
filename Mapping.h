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

    virtual int encode(int index);

    virtual int decode(int index);


public:
    virtual int substitute(int index) override;
};


#endif //CENIGMA_SZ6315_MAPPING_H
