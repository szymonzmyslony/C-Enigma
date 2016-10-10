//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_MAPPING_H
#define CENIGMA_SZ6315_MAPPING_H



using namespace std;

#include <map>
#include "EnigmaPiece.h"

class Mapping : public EnigmaPiece {
protected:
    std::map<int, int> mapping;
    int encode(int index);
    int decode(int index);


public:
    virtual int substitute(int index) override;
};


#endif //CENIGMA_SZ6315_MAPPING_H
