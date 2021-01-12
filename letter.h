#ifndef LETTER_H
#define LETTER_H

#include <iostream>
#include <vector>
#include "toy.h"
using namespace std;

class Letter
{
private:
    string lastName;
    string firstName;
    int age;
    string city;
    string envelopeColor;
    vector<string> wishList;
    int allocatedBudget;
    vector<Toy> giftList;
    int lollipopsNumber;
    int embersNumber;
    bool giftPacked;

public:
    //default constructor
    Letter();
    //constructor overloading
    Letter(string lastName, string firstName, int age, string city, string envelopeColor, vector<string> wishList);
    //destructor
    ~Letter();

    void print();

    // getters
    string getLastName() const;
    string getFirstName() const;
    int getAge() const;
    string getCity() const;
    string getEnvelopeColor() const;
    vector<string> getWishList() const;
    int getAllocatedBudget() const;
    int getLollipopsNumber() const;
    int getEmbersNumber() const;
    vector<Toy> getGiftList() const;

    // setters
    void setAllocatedBudget(int budget);
    void setLollipopsNumber(int lollipopsNumber);
    void setEmbersNumber(int embersNumber);
    void setGiftList(vector<Toy> gifts);
    void setGiftPacked(bool giftPacked);
};

#endif