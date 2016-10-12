//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_PLUGBOARD_H
#define CENIGMA_SZ6315_PLUGBOARD_H


#include "Mapping.h"

class Plugboard : public Mapping {
public:
    Plugboard(std::map<int, int> map);

protected:
    int substitute(int index);


};



#endif //CENIGMA_SZ6315_PLUGBOARD_H
