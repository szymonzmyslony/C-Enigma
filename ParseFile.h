//
// Created by szymon on 11.10.16.
//

#ifndef CENIGMA_SZ6315_PARSEFILE_H
#define CENIGMA_SZ6315_PARSEFILE_H

#include "Alphabet.h"
#include "map"
#include <fstream>

using namespace std;

class ParseFile {

public:
    ParseFile(int **rotorsArray, map<int, int> *plugboardMap, int numberOfFilesGiven, char **files);

private:
    void updateArrays(char **files, int numberOfRotorsGiven, int **rotorsArray);

    void updateMap(char *file_name, map<int, int> *plugboardMap);


};


#endif //CENIGMA_SZ6315_PARSEFILE_H