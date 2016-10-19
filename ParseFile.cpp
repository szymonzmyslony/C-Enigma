//
// Created by szymon on 11.10.16.
//




#include "ParseFile.h"


ParseFile::ParseFile(int numberOfFilesGiven, char **files) {
    if (numberOfFilesGiven == 0) {
    } else if (numberOfFilesGiven == 1) {
        checkIfExists(files[numberOfFilesGiven]);
        arrayForMaps = updateMap(files[numberOfFilesGiven], arrayForMaps, true);
    } else {
        checkIfExists(files[numberOfFilesGiven]);
        arrayForMaps = updateMap(files[numberOfFilesGiven], arrayForMaps, true);
        for (int i = 1; i < numberOfFilesGiven; i++) {
            checkIfExists(files[i]);
            arrayForMaps = updateMap(files[i], arrayForMaps, false);
        }
        int a = 0;
    }
}

const  vector<vector<int>> ParseFile::getArrayForMaps(){
    return arrayForMaps;
}


vector<vector<int>> ParseFile::updateMap(char *file_name,  vector<vector<int>> map, bool isPlugboard) {
    ifstream file(file_name, ifstream::in);
    vector<int> mapResult(ALPHABET_LENGTH);

    int key;
    int value;
    if (isPlugboard) {
        for (int i = 0; i<ALPHABET_LENGTH;i++){
            mapResult[i]=-1;
        }
        while (!file.eof()) {
            file >> key;
            file >> value;
            mapResult[key]=value;
            mapResult[value]=key;
        }
        map.push_back(mapResult);
    } else {
        int i = 0;
        while (!file.eof()) {
            file >> value;
            mapResult[i]=value;
            i++;
            if (i > 25) {
                break;
            }
        }
        map.push_back(mapResult);
    }
    file.close();
    return map;
}


bool ParseFile::checkIfExists(string name) {
    struct stat buffer;
    if (!stat(name.c_str(), &buffer) == 0) {
        throw std::runtime_error("Could not open file");
    }
    return true;
}

