#include <iostream>
using namespace std;

class Toy
{
private:
    int price;
    string name;

public:
    Toy();
    Toy(int price, string name)
    {
        this->price = price;
        this->name = name;
    }

    int getPrice()
    {
        return this->price;
    }

    string getName()
    {
        return this->name;
    }
};