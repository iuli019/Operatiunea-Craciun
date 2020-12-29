#include <iostream>
using namespace std;

class Status
{
private:
    string firstName;
    string lastName;
    bool isGood;

public:
    Status();
    Status(string firstName, string lastName, bool isGood)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->isGood = isGood;
    }

    string getFirstName()
    {
        return this->firstName;
    }

    string getLastName()
    {
        return this->lastName;
    }

    bool isIsGood()
    {
        return this->isGood;
    }
};