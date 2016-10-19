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
/*
 * parses file to a vector of maps
 */
private:
    bool checkIfExists(string name);
    vector<vector<int>> arrayForMaps;
    vector<vector<int>> updateMap(char *file_name,  vector<vector<int>> map, bool isPlugboard);
public:
    ParseFile(int numberOfFilesGiven, char **files);
    const  vector<vector<int>> getArrayForMaps();
};


#endif //CENIGMA_SZ6315_PARSEFILE_H


