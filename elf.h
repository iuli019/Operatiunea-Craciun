#ifndef ELF_H
#define ELF_H
#include <iostream>
using namespace std;
#include <vector>
#include "toy.h"
#include "create.h"

class Elf
{
public:
    vector<bool> isGood;
    vector<Toy> toyList;
    vector<Toy> gifts;

public:
    Elf();
    void allocateBudget(vector<Letter> *letters);
    void chooseGifts(vector<Letter> *letters);
    int lollipops(vector<Letter> letters);
    vector<string> cities(vector<Letter> letters);
    void passGiftListToTroll();
    vector<Toy> getGifts();
    void setGifts(vector<Toy> gifts);
};

#endif