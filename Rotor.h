//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_ROTOR_H
#define CENIGMA_SZ6315_ROTOR_H
#define STARTING_POSITION_OF_ROTOR 0


#include "Mapping.h"

class Rotor : public Mapping {
private:
    int latch_position;
    bool locked;
protected:

    void rotate(int previous_latch) override;

public:
    Rotor(std::map<int, int> map);
    void rotate() override;
};


#endif //CENIGMA_SZ6315_ROTOR_H
