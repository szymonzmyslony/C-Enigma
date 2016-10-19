//
// Created by szymon on 10.10.16.
//

#include "Mapping.h"

int Mapping::encode(const int index) {
    decode(index);
}

int Mapping::decode(int index) {
   if (mapping[index]!=-1){
       return mapping[index];
   }
    return index;
}

Mapping::Mapping(vector<int> mapping) : mapping(mapping) {}

