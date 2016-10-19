// skeleton C++ file, you will need to edit this and other files to implement your enigma machine
#include <stdexcept>
#include <iostream>
#include "Enigma.h"
#include "ParseFile.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc == 1) {
        throw exception();
    }
    ParseFile *parseFile = new ParseFile(argc - 1, argv);
    // it returns a vector by value so it easier to reason about it
    vector<vector<int>> arrayForMaps = parseFile->getArrayForMaps();
    delete (parseFile);
    Enigma *enigma = new Enigma(&arrayForMaps, argc - 1);
    while (!cin.eof()) {
        string toBeEncoded;
        cin >> ws >> toBeEncoded;
        for (char c : toBeEncoded) {
            cout << (enigma->encodeCharacter(c));
        }
    }
    delete (enigma);
}
