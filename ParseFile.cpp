//
// Created by szymon on 11.10.16.
//

#include <fstream>
#include "ParseFile.h"

ParseFile::ParseFile(int **rotorsArray, map<int, int> *plugboardMap, int numberOfFilesGiven, char **files) {
    if (numberOfFilesGiven == 0) {

    } else if (numberOfFilesGiven == 1) {
        updateMap(files[numberOfFilesGiven], plugboardMap);
    } else {
        updateMap(files[numberOfFilesGiven], plugboardMap);
        updateArrays(files, numberOfFilesGiven, rotorsArray);
    }
}


void ParseFile::updateArrays(char **files, int numberOfRotors, int **rotorsArray) {
    for (int j = 1; j < numberOfRotors; j++) {
        char *file_name = files[j];
        ifstream file(file_name);
        int value;
        for (int i = 0; i < ALPHABET_LENGTH - 1; i++) {
            file >> value;
            rotorsArray[j][i] = value;


        }
        file.close();

    }


}

void ParseFile::updateMap(char *file_name, map<int, int> *plugboardMap) {
    ifstream file(file_name);
    int key;
    int value;
    while (!file.eof()) {
        file >> key >> value;

        plugboardMap->insert(make_pair(key,value));
        plugboardMap->insert(make_pair(value,key));
    }
    file.close();


}
