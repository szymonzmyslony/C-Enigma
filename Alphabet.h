//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_CODABLE_H
#define CENIGMA_SZ6315_CODABLE_H
#define ALPHABET_LENGTH 26

class Alphabet {
public:
    const char &getCharacter(int index);
    const int &getIndex(char character);
    const int &shift(int index, int offset);

private:
    const char alpabet[] = {'a','b','c'};

};


#endif //CENIGMA_SZ6315_CODABLE_H
