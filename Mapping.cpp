//
// Created by szymon on 10.10.16.
//

#include "Mapping.h"

int Mapping::substitute(const int index) {
    return  decode(next.substitute(encode(index)));
}

int Mapping::encode(int index) {
    map<int, int>::iterator it = mapping.find(index);
    if(it != mapping.end()) {
        return it->second;
    }
    return index;

    }

int Mapping::decode(int index) {
    for (map<int, int>::iterator it = mapping.begin(); it != mapping.end(); ++it )
    if (it->second == index)
        return it->first;
}
