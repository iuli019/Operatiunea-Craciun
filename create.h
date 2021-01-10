#ifndef CREATE_H
#define CREATE_H
#include <vector>
#include "toy.h"
#include "letter.h"

extern int lettersNumber;
extern Toy defaultGift100;
extern Toy defaultGift10;

vector<Toy> createToyList();

vector<Letter> createLetterList();

vector<bool> createIsGoodList();
#endif