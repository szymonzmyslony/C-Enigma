//
// Created by szymon on 10.10.16.
//

#ifndef CENIGMA_SZ6315_CODABLE_H
#define CENIGMA_SZ6315_CODABLE_H
#define ALPHABET_LENGTH 26
#define SHIFT_POSITION 0
#define FIRST_LETTER 'a'


class Alphabet {
public:
    const char &getCharacter(int index);

    const int &getIndex(char character);

    const int &shift(int index);

private:
    const char alpabet[] = "abcdefghijklmnopqrstuvwxyz";

};


#endif //CENIGMA_SZ6315_CODABLE_H
