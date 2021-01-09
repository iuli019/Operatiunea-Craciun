#include "letter.h"

Letter::Letter(string lastName, string firstName, int age, string city, string envelopeColor, string wishList)
{
    this->lastName = lastName;
    this->firstName = firstName;
    this->age = age;
    this->city = city;
    this->envelopeColor = envelopeColor;
    this->wishList = wishList;
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

string Letter::getWishList() const
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

string Letter::getGiftList() const
{
    return this->giftList;
}

void Letter::setGiftList(string giftList)
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
