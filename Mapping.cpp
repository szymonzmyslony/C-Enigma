//
// Created by szymon on 10.10.16.
//

#include "Mapping.h"

int Mapping::encode(const int index) {
    int lookingfor = index;

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


void Mapping::update(void) {
    map<int, int>::iterator it;
    map<int, int> replacement = *new map<int, int>;


    for (it = (mapping.begin()++); it != mapping.end(); ++it) {
        int current_key = it->first;
        int current_value = it->second;
        replacement.insert(make_pair((current_key+1)%(ALPHABET_LENGTH-1), current_value));
            }
    mapping=replacement;

}

Mapping::Mapping(const map<int, int> &mapping) : mapping(mapping) {}

