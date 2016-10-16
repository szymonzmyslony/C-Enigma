//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_PARSEFILE_H
#define CENIGMA_SZ6315_PARSEFILE_H

#include "Alphabet.h"
#include "map"
#include <fstream>
#include <sys/stat.h>
#include <vector>
using namespace std;

class ParseFile {

private:
     bool checkIfExists(string name);
    vector<map<int, int>> arrayForMaps;
    vector<std::map<int, int>> updateMap(char *file_name, vector<std::map<int, int>> map, bool isPlugboard);

public:
    ParseFile(int numberOfFilesGiven, char **files);
    const vector<map<int, int>> &getArrayForMaps() const;
};


#endif //CENIGMA_SZ6315_PARSEFILE_H


