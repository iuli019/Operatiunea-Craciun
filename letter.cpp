#include "letter.h"

Letter::Letter(string lastName, string firstName, int age, string city, string envelopeColor, vector<string> wishList)
{
    this->lastName = lastName;
    this->firstName = firstName;
    this->age = age;
    this->city = city;
    this->envelopeColor = envelopeColor;
    this->wishList = wishList;
    this->allocatedBudget = 0;
    this->embersNumber = 0;
    this->lollipopsNumber = 0;
    this->giftList = {};
    this->giftPacked = false;
};

Letter::~Letter(){};

string Letter::getLastName() const
{
    return this->lastName;
}

string Letter::getFirstName() const
{
    return this->firstName;
}

int Letter::getAge() const
{
    return this->age;
}

string Letter::getCity() const
{
    return this->city;
}

string Letter::getEnvelopeColor() const
{
    return this->envelopeColor;
}

vector<string> Letter::getWishList() const
{
    return this->wishList;
}

int Letter::getAllocatedBudget() const
{
    return this->allocatedBudget;
}

void Letter::setAllocatedBudget(int allocatedBudget)
{
    this->allocatedBudget = allocatedBudget;
}

vector<Toy> Letter::getGiftList() const
{
    return this->giftList;
}

void Letter::setGiftList(vector<Toy> giftList)
{
    this->giftList = giftList;
}

int Letter::getLollipopsNumber() const
{
    return this->lollipopsNumber;
}

void Letter::setLollipopsNumber(int lollipopsNumber)
{
    this->lollipopsNumber = lollipopsNumber;
}

int Letter::getEmbersNumber() const
{
    return this->embersNumber;
}

void Letter::setEmbersNumber(int embersNumber)
{
    this->embersNumber = embersNumber;
}
void Letter::setGiftPacked(bool giftPacked)
{
    this->giftPacked = giftPacked;
}
void Letter::print()
{
    cout << firstName << " " << lastName << ": ";
    for (int i = 0; i < giftList.size(); i++)
    {
        cout << giftList[i].getName() << " ";
    }
    cout << endl;
}
