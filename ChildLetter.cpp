#include <iostream>
using namespace std;

class ChildLetter
{
private:
    string fistName;
    string lastName;
    int age;
    string city;
    string wishlist[5];
    string color;
    int budgetAllocated;

public:
    ChildLetter();
    ChildLetter(string firstName, string lastName, int age, string city, string wishlist[5], string color);

    string getFistName()
    {
        return this->fistName;
    }

    string getLastName()
    {
        return this->lastName;
    }

    int getAge()
    {
        return this->age;
    }

    string getCity()
    {
        return this->city;
    }

    string getWishlist()
    {
        return this->wishlist[5];
    }

    string getColor()
    {
        return this->color;
    }

    int getBudgetAllocated()
    {
        return this->budgetAllocated;
    }

    void setBudgetAllocated(int budgetAllocated)
    {
        this->budgetAllocated = budgetAllocated;
    }
};

ChildLetter::ChildLetter(string firstName, string lastName, int age, string city, string wishlist[5], string color)
{
    this->fistName = firstName;
    this->lastName = lastName;
    this->city = city;
    for (int i = 0; i < 5; i++)
    {
        this->wishlist[i] = wishlist[i];
    }
    this->color = color;
};