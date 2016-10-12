// skeleton C++ file, you will need to edit this and other files to implement your enigma machine
#include <stdexcept>
#include <iostream>
#include "Enigma.h"
#include "ParseFile.h"

using namespace std;

int main(int argc, char **argv) {

    argv++;
    map<int, int> **mapsforRotors;
    map<int, int> *mapForPlugboard;
    ParseFile *parseFile = new ParseFile(mapsforRotors, mapForPlugboard, argc - 1, argv);
    delete (parseFile);
    Enigma *enigma = new Enigma(mapsforRotors, mapForPlugboard, argc - 2);
    delete (mapForPlugboard);
    char toBeEncoded;
    while (cin >> toBeEncoded) {
        cout << (enigma->encodeCharacter(toBeEncoded));
    }
    delete (enigma);


}
