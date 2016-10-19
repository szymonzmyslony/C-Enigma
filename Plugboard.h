//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_PLUGBOARD_H
#define CENIGMA_SZ6315_PLUGBOARD_H


#include "Mapping.h"
//needs to override substitute to rotate the first rotor aftet 1st letter was encrypted
class Plugboard : public Mapping {
public:
    Plugboard(vector<int> map);
private:
    bool has_it_started;
    virtual int substitute(int index) override;

};


#endif //CENIGMA_SZ6315_PLUGBOARD_H
