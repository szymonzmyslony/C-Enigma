//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_CODABLE_H
#define CENIGMA_SZ6315_CODABLE_H
#define alphabet_length=26

class Alphabet {
public:
    const char &getCharacter(int index);
    const int &getIndex(char character);

private:
    const char alpabet[] = {'a','b','c'};

};


#endif //CENIGMA_SZ6315_CODABLE_H
