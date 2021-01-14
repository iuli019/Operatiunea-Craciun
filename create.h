#ifndef CREATE_H
#define CREATE_H
#include <vector>
#include "toy.h"
#include "letter.h"

//global variables
extern int lettersNumber;
extern Toy defaultGift100;
extern Toy defaultGift10;

vector<Toy> createToyList();

vector<Letter> createLetterList();

vector<bool> createIsGoodList();

//template to iterate any iterable obj
template <typename T>
void print(vector<T> route)
{
    for (auto const &i : route)
    {
        cout << i << " ";
    }
    cout << endl;
}
#endif