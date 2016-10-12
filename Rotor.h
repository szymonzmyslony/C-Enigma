//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_ROTOR_H
#define CENIGMA_SZ6315_ROTOR_H
#define STARTING_POSITION_OF_ROTOR 1
#define LAST_POSITION_OF_ROTOR 26


#include "ArrayMap.h"

class Rotor : public ArrayMap {
private:
    int latch_position;
    bool locked;
public:
    Rotor(int arrayMap[]);

    void rotate() override;


    void rotate(int previous_latch) override;
};


#endif //CENIGMA_SZ6315_ROTOR_H
