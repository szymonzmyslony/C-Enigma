//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_PLUGBOARD_H
#define CENIGMA_SZ6315_PLUGBOARD_H


#include "Mapping.h"

class Plugboard : public Mapping {
public:
    Plugboard(std::map<int, int> map);

    virtual int substitute(int index) override;
    bool has_it_started;

};


#endif //CENIGMA_SZ6315_PLUGBOARD_H
