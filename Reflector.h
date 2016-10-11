//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_REFLECTOR_H
#define CENIGMA_SZ6315_REFLECTOR_H



#include "Alphabet.h"
#include "Mapping.h"

class Reflector : public Mapping
{
private:
    const int mappingFunction(int x);
    const int inverseMapping(int x);

public:


    virtual int substitute(int index) override;

protected:
    virtual int encode(int index) override;

    virtual int decode(int index) override;

};


#endif //CENIGMA_SZ6315_REFLECTOR_H
