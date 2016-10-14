# edit this makefile so that running make compiles your enigma program
CP=g++
CC=-c -g -std=c++11
CO=-std=c++11





enigma: Main.o Enigma.o ParseFile.o EnigmaPiece.o Mapping.o Reflector.o Rotor.o Plugboard.o Alphabet.o
	g++ -o enigma Main.o Enigma.o ParseFile.o EnigmaPiece.o Mapping.o Reflector.o Rotor.o Plugboard.o Alphabet.o


Enigma.o: Enigma.cpp Alphabet.h EnigmaPiece.h Rotor.h Plugboard.h Reflector.h
	$(CP) $(CC) $^ -o $@

Alphabet.o: Alphabet.cpp
	$(CP) $(CC) $^ -o $@

EnigmaPiece.o: EnigmaPiece.cpp Alphabet.h 
	$(CP) $(CC) $^ -o $@


Mapping.o: Mapping.cpp EnigmaPiece.h
	$(CP) $(CC) $^ -o $@


Reflector.o: Reflector.cpp EnigmaPiece.h
	$(CP) $(CC) $^ -o $@


Rotor.o: Rotor.cpp Mapping.h
	$(CP) $(CC) $^ -o $@


Plugboard.o: Plugboard.cpp Mapping.h
	$(CP) $(CC) $^ -o $@


ParseFile.o: ParseFile.cpp Alphabet.h
	$(CP) $(CC) $^ -o $@

Main.o: Main.cpp Enigma.h ParseFile.h
	$(CP) $(CC) $^ -o $@

clean:
	rm -rf enigma *.o

.PHONY: clean

