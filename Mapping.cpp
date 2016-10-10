//
// Created by szymon on 10.10.16.
//

#include "Mapping.h"

int Mapping::substitute(int index) {
    return  decode(next.substitute(encode(index)));
}

int Mapping::encode(int index) {
   return 0;
}

int Mapping::decode(int index) {
    return 0;
}
