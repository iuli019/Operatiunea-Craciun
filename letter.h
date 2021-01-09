#ifndef LETTER_H
#define LETTER_H

#include <iostream>
using namespace std;

class Letter
{
private:
    string lastName;
    string firstName;
    int age;
    string city;
    string envelopeColor;
    string wishList;
    int allocatedBudget;
    string giftList;
    int lollipopsNumber;
    int embersNumber;

public:
    //default constructor
    Letter();
    //constructor overloading
    Letter(string lastName, string firstName, int age, string city, string envelopeColor, string wishList);
    //destructor
    ~Letter();

    // getters
    string getLastName() const;
    string getFirstName() const;
    int getAge() const;
    string getCity() const;
    string getEnvelopeColor() const;
    string getWishList() const;
    int getAllocatedBudget() const;
    int getLollipopsNumber() const;
    int getEmbersNumber() const;
    string getGiftList() const;

    // setters
    void setAllocatedBudget(int budget);
    void setLollipopsNumber(int lollipopsNumber);
    void setEmbersNumber(int embersNumber);
    void setGiftList(string gifts);
};

#endif