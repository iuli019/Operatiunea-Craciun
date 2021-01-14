#ifndef ELF_H
#define ELF_H
#include <iostream>
using namespace std;
#include <vector>
#include "toy.h"
#include "create.h"
#include "helpers.h"

class Elf : public Helpers //inheritance
{
private:
    vector<Toy> toyList;
    vector<bool> isGood = {true, false, true, false, true};

public:

    //constructor & destructor
    Elf();
    ~Elf();

    void allocateBudget(vector<Letter> *letters);
    void chooseGifts(vector<Letter> *letters);
    int calculateNumberOf(vector<Letter> letters);
    vector<string> cities(vector<Letter> letters);

    // getters
    vector<bool> getIsGood();
    vector<Toy> getGiftList(vector<Letter> letters);
};

#endif