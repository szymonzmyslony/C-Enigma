//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_PLUGBOARD_H
#define CENIGMA_SZ6315_PLUGBOARD_H


#include "Mapping.h"

class Plugboard : Mapping {
public:
    Plugboard(map<int, int> map);

private:
    virtual int substitute(int index) override;

};

int Plugboard::substitute(int index) {
    next.rotate();
    return Mapping::substitute(index);
}

#endif //CENIGMA_SZ6315_PLUGBOARD_H
