#ifndef TROLL_H
#define TROLL_H
#include <iostream>
#include <vector>
#include "toy.h"
#include "letter.h"
#include "elf.h"
#include "helpers.h"
using namespace std;

class Troll : public Elf //inheritance
{
private:
    vector<Toy> giftList;

public:
    Troll();
    ~Troll();
    int packGifts(vector<Letter> *letters);
    void addEmbers(vector<Letter> *letters);
    int calculateNumberOf(vector<Letter> letters);

    vector<Toy> getGiftList();
    void setGiftList(vector<Toy> giftList);
};

#endif
