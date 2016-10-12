//
// Created by szymon on 11.10.16.
//


#include "ParseFile.h"

ParseFile::ParseFile(map<int, int> **rotorsArray, map<int, int> *plugboardMap, int numberOfFilesGiven, char **files) {
    if (numberOfFilesGiven == 0) {

    } else if (numberOfFilesGiven == 1) {
        updateMap(files[numberOfFilesGiven], plugboardMap, true);
    } else {

        updateMap(files[numberOfFilesGiven], plugboardMap, true);
        for (int i = 1; i<numberOfFilesGiven-1; i++){
            updateMap(files[i], *rotorsArray, false);
            rotorsArray++;
        }

    }
}


//void ParseFile::updateArrays(char **files, int numberOfRotors, int **rotorsArray) {
//    for (int j = 1; j < numberOfRotors; j++) {
//        char *file_name = files[j];
//        ifstream file(file_name);
//        int value;
//        for (int i = 0; i < ALPHABET_LENGTH - 1; i++) {
//            file >> value;
//            rotorsArray[j][i] = value;
//        }
//        file.close();
//
//    }
//
//
//}

void ParseFile::updateMap(char *file_name, map<int, int> *map, bool isPlugboard) {
    ifstream file(file_name);
    int key;
    int value;
    if (isPlugboard){
    while (!file.eof()) {
        file >> key >> value;
        map->insert(make_pair(key, value));
        map->insert(make_pair(value, key));
    }}
    else{
        while (!file.eof()) {
            file >> key >> value;
            map->insert(make_pair(key, value));
               }}



    file.close();


}
