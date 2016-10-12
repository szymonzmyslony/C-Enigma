// skeleton C++ file, you will need to edit this and other files to implement your enigma machine
#include <stdexcept>
#include <iostream>
#include "Enigma.h"
#include "ParseFile.h"

using namespace std;

int main(int argc, char **argv) {

    argv++;
    int **arrayForRotors;
    map<int, int> *mapForPlugboard;
    ParseFile *parseFile = new ParseFile(arrayForRotors, mapForPlugboard, argc - 1, argv);
    delete(parseFile);
    Enigma *enigma = new Enigma(arrayForRotors, mapForPlugboard, argc - 2);

    delete(mapForPlugboard);
    char toBeEncoded;
    while (cin >> toBeEncoded) {
        cout << (enigma->encodeCharacter(toBeEncoded));
    }
    delete(enigma);


}
