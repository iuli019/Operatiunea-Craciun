#ifndef TOY_H
#define TOY_H

#include <iostream>
using namespace std;

class Toy
{
private:
    string name;
    int price;

public:
    Toy(string name, int price);

    string getName() const;
    int getPrice() const;
};

#endif