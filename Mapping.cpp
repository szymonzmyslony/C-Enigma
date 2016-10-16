//
// Created by szymon on 10.10.16.
//

#include "Mapping.h"

int Mapping::encode(const int index) {
    map<int, int>::iterator it = mapping.find(index);
    if (it != mapping.end()) {
        return it->second;
    }
    return index;
}

int Mapping::decode(int index) {
    map<int, int>::iterator it;
    for (it = mapping.begin(); it != mapping.end(); ++it) {
        if (it->second == index) {
            return it->first;
        }
    }
    return index;
}



Mapping::Mapping(const map<int, int> &mapping) : mapping(mapping) {}

