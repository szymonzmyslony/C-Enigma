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


void Mapping::update(void) {
    map<int, int>::iterator it;
    map<int, int> replacement = *new map<int, int>;
    int current_value;
    int current_key;
    int next_value;
    for (it = (mapping.begin()); it != mapping.end(); ++it) {
        current_key = it->first;
        current_value = it->second;
        replacement.insert(make_pair((current_key + ALPHABET_LENGTH - 1) % ALPHABET_LENGTH,
                                     (current_value + ALPHABET_LENGTH - 1) % ALPHABET_LENGTH));
    }
    mapping = replacement;
}

Mapping::Mapping(const map<int, int> &mapping) : mapping(mapping) {}

