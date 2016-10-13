// skeleton C++ file, you will need to edit this and other files to implement your enigma machine
#include <stdexcept>
#include <iostream>
#include "Enigma.h"
#include "ParseFile.h"

using namespace std;

int main(int argc, char **argv) {
    map<int, int> *mapsforRotors = new map<int, int>[1];
    map<int, int>* mapForPlugboard = (new map<int, int>);

    ParseFile *parseFile = new ParseFile(&mapsforRotors, mapForPlugboard, argc - 1, argv);
   // delete (parseFile);
    Enigma *enigma = new Enigma(mapsforRotors, mapForPlugboard, argc - 1);
   // delete(mapsforRotors);
    //delete(&mapForPlugboard);
    char toBeEncoded;

    while (cin >> toBeEncoded) {
        cout << (enigma->encodeCharacter(toBeEncoded));
    }
    delete (enigma);


}
