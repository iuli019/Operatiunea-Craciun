#ifndef ELF_H
#define ELF_H
#include <iostream>
using namespace std;
#include <vector>
#include <toy.h>

class Elf
{
private:
    vector<bool> isGood = {true, false, true, true, false};
    vector<Toy> toyList;

public:
    Elf(vector<bool> isGood);
    void allocateBudget();
};

#endif