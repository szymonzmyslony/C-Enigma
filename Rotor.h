//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_ROTOR_H
#define CENIGMA_SZ6315_ROTOR_H
#define STARTING_POSITION_OF_ROTOR 0


#include "Mapping.h"
//rotor class gets map in the same way as plugboard, introduces invermap
class Rotor : public Mapping {
private:
    int latch_position;
    vector<int> inverseMapping;
    void rotate(int previous_latch) override;
    virtual int encode(const int index) override;
    virtual int decode(int index) override;
    void rotate() override;
public:
    Rotor(vector<int> map);
};


#endif //CENIGMA_SZ6315_ROTOR_H
