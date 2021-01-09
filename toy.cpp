#include "toy.h"

Toy::Toy(string name, int price)
{
    this->name = name;
    this->price = price;
}

string Toy::getName() const
{
    return this->name;
}

int Toy::getPrice() const
{
    return this->price;
}
