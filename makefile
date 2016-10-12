# edit this makefile so that running make compiles your enigma program
CP=g++
CC=-c
CO=-o


enigma: Main.o
	g++ -o enigma Main.o

Main.o: Main.cpp
	g++ -c Main.cpp


Alphabet.o: Alphabet.cpp
    $(CP)-c Alphabet.cpp



ArrayMap.o: Alphabet.cpp



clean:
	rm -rf enigma *.o

.PHONY: clean
