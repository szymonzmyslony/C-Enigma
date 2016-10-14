//
// Created by szymon on 11.10.16.
//



#include "ParseFile.h"

ParseFile::ParseFile(map<int, int> *rotorsArray, map<int, int> plugboardMap, int numberOfFilesGiven, char **files) {
    if (numberOfFilesGiven == 0) {
    } else if (numberOfFilesGiven == 1) {
        checkIfExists(files[numberOfFilesGiven]);
        updateMap(files[numberOfFilesGiven], &plugboardMap, true);

    } else {

        updateMap(files[numberOfFilesGiven], &plugboardMap, true);
        for (int i = 1; i < numberOfFilesGiven; i++) {
            checkIfExists(files[i]);
            updateMap(files[i], &rotorsArray[numberOfFilesGiven - 1 - i], false);
            rotorsArray++;
        }

    }

}


void ParseFile::updateMap(char *file_name, map<int, int> *map, bool isPlugboard) {
    ifstream file(file_name, ifstream::in);
    int key;
    int value;
    if (isPlugboard) {
        while (!file.eof()) {
            file >> key;
            file >> value;


            map->insert(make_pair(key, value));
            map->insert(make_pair(value, key));
        }
    } else {
        int i =0;
        while (!file.eof()) {
            file >> value;
            map->insert(make_pair(i, value));
            i++;
        }
    }


    file.close();


}

bool ParseFile::checkIfExists(string name) {
    struct stat buffer;
    if (!stat(name.c_str(), &buffer) == 0) {
        throw std::runtime_error("Could not open file");
    }
    return true;
}
