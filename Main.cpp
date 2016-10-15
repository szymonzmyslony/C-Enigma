// skeleton C++ file, you will need to edit this and other files to implement your enigma machine
#include <stdexcept>
#include <iostream>
#include "Enigma.h"
#include "ParseFile.h"

using namespace std;

int main(int argc, char **argv) {



//    if (argc>2){
//        mapforRotors[argc-2] = new map<int, int>[argc - 2];
//    }


    ParseFile *parseFile = new ParseFile(argc - 1, argv);
//    //delete (parseFile);
    vector<map<int, int>> arrayForMaps = parseFile->getArrayForMaps();

    Enigma *enigma = new Enigma(&arrayForMaps, argc - 1);
    // delete(mapsforRotors);
    //delete(&mapForPlugboard);
    char toBeEncoded;

    while (cin >> toBeEncoded) {
        cout << (enigma->encodeCharacter(toBeEncoded));
   }
  //  delete (enigma);


}
