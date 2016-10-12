# edit this makefile so that running make compiles your enigma program
CP=g++
CC=-c
CO=-o


enigma: Main.o
	g++ -o enigma Main.o

Main.o: Main.cpp Enigma.cpp
	$(CP) $(CC) Main.cpp Enigma.cpp

Enigma.o: Enigma.cpp Alphabet.o Rotor.o Reflector.o Plugboard.o
	$(CP) $(CO) Enigma.cpp Alphabet.o Rotor.o Reflector.o Plugboard.o

Alphabet.o: Alphabet.cpp
	$(CP) $(CC) Alphabet.cpp

EnigmaPiece.o: Alphabet.cpp EnigmaPiece.cpp
	$(CP) $(CC) Alphabet.cpp EnigmaPiece.cpp


Mapping.o: Mapping.cpp EnigmaPiece.cpp
	$(CP) $(CC) Mapping.cpp EnigmaPiece.cpp


ArrayMap.o: ArrayMap.cpp EnigmaPiece.cpp
	$(CP) $(CC) ArrayMap.cpp EnigmaPiece.cpp


Reflector.o: Reflector.cpp EnigmaPiece.cpp
	$(CP) $(CC) Reflector.cpp EnigmaPiece.cpp


Rotor.o: Rotor.cpp ArrayMap.cpp
	$(CP) $(CC) Rotor.cpp ArrayMap.cpp


Plugboard.o: Plugboard.cpp Mapping.cpp
	$(CP) $(CC) Plugboard.cpp Mapping.cpp


ParseFile.o: ParseFile.cpp Alphabet.cpp
	$(CP) $(CC) Alphabet.cpp ParseFile.cpp



clean:
	rm -rf enigma *.o

.PHONY: clean
