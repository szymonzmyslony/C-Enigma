//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_MAPPING_H
#define CENIGMA_SZ6315_MAPPING_H


#include <map>
#include "EnigmaPiece.h"

using namespace std;


class Mapping : public EnigmaPiece {

private:
    map<int, int> mapping;
protected:
    int encode(const int index);
    int decode(int index);
    void update(void);
    Mapping(const map<int, int> &mapping);

};


#endif //CENIGMA_SZ6315_MAPPING_H
