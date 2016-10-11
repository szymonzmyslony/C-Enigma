//
// Created by szymon on 10.10.16.
//

#include "Mapping.h"

int Mapping::encode(int index) {
    map<int, int>::iterator it = mapping.find(index);
    if(it != mapping.end()) {
        return it->second;
    }
    return index;

    }

int Mapping::decode(int index) {
    return encode(encode(index));
}

