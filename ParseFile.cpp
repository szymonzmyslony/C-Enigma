//
// Created by szymon on 11.10.16.
//




#include "ParseFile.h"


ParseFile::ParseFile(int numberOfFilesGiven, char **files) {

    map<int, int> ble;

    int bled = 0;
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


    }


}

const vector<map<int, int>> &ParseFile::getArrayForMaps() const {
    return arrayForMaps;
}


vector<map<int, int>> ParseFile::updateMap(char *file_name, vector<map<int, int>> map, bool isPlugboard) {
    ifstream file(file_name, ifstream::in);
    std::map<int, int> mapResult;
    int key;
    int value;
    if (isPlugboard) {

        while (!file.eof()) {
            file >> key;
            file >> value;
            mapResult.insert(make_pair(key, value));
            mapResult.insert(make_pair(value, key));
        }
        map.push_back(mapResult);

    } else {

        int i = 0;
        while (!file.eof()) {
            file >> value;
            mapResult.insert(make_pair(i, value));
            i++;
            if (i>25){
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



//void ParseFile::updateMap(char *file_name, vector<map < int, int>) {
//
//}

