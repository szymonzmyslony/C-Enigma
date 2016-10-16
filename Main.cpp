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
    vector<map<int, int>> arrayForMaps = parseFile->getArrayForMaps();
    Enigma *enigma = new Enigma(&arrayForMaps, argc - 1);
    char toBeEncoded;
    while (cin >> toBeEncoded) {
        cout << (enigma->encodeCharacter(toBeEncoded));
    }
    delete (enigma);
    delete (parseFile);


}
