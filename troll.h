#ifndef TROLL_H
#define TROLL_H
#include <iostream>
#include <vector>
#include "toy.h"
#include "letter.h"
#include "elf.h"
using namespace std;

class Troll : public Elf
{
private:
    vector<Toy> giftList;

public:
    int packGifts(vector<Letter> *letters);
    int addEmbers(vector<Letter> *letters);

    vector<Toy> getGiftList();
    void setGiftList(vector<Toy> giftList);
};

#endif
