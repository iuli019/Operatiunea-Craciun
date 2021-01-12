#ifndef ELF_H
#define ELF_H
#include <iostream>
using namespace std;
#include <vector>
#include "toy.h"
#include "create.h"

class Elf
{
private:
    vector<Toy> toyList;
    vector<bool> isGood = {true, false, true, false, true};

public:
    Elf();
    void allocateBudget(vector<Letter> *letters);
    void chooseGifts(vector<Letter> *letters);
    int lollipops(vector<Letter> letters);
    vector<string> cities(vector<Letter> letters);
    vector<bool> getIsGood();
    vector<Toy> getGiftList(vector<Letter> letters);
};

#endif