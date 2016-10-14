# edit this makefile so that running make compiles your enigma program
CP=g++
CC= -c 
CO=-o -std=c++11


# Declaration of variables
CC = g++
CC_FLAGS = -w -g -std=c++11
 
# File names
EXEC = enigma
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
 
# Main target
$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)
 
# To obtain object files
%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@
 
# To remove generated files
clean:
	rm -f $(EXEC) $(OBJECTS)



