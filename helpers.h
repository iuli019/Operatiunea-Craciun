#ifndef HELPERS_H
#define HELPERS_H
#include <iostream>
#include <vector>
#include "letter.h"
#include "toy.h"
using namespace std;

// abstract function
class Helpers
{
public:
    virtual int calculateNumberOf(vector<Letter> letters) = 0; 
};

#endif