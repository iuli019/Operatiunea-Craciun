#include "troll.h"
#include "create.h"
#include <iostream>
#include <vector>

using namespace std;

Troll::Troll(){};
Troll::~Troll(){};

// packing the gifts and calculate the number of packages for girls -> in the main for the boys
int Troll::packGifts(vector<Letter> *letters)
{
    int girls = 0;

    for (int i = 0; i < lettersNumber; i++)
    {
        (*letters)[i].setGiftPacked(true);
        if ((*letters)[i].getEnvelopeColor().compare("pink") == 0)
        {
            girls++;
        }
    }
    return girls;
}

// set embers for every child
void Troll::addEmbers(vector<Letter> *letters)
{

    vector<bool> isGood = this->getIsGood();
    for (int i = 0; i < lettersNumber; i++)
    {

        if (!isGood[i])
        {
            (*letters)[i].setEmbersNumber(1);
        }
    }
}
// calculate the number of embers given //override  calculateNumberOf method from the abstract class Helpers
int Troll::calculateNumberOf(vector<Letter> letters)
{
    int embers = 0;
    for (int i = 0; i < lettersNumber; i++)
    {
        embers = embers + letters[i].getEmbersNumber();
    }

    return embers;
}

// getter and setter
vector<Toy> Troll::getGiftList()
{
    return this->giftList;
}
void Troll::setGiftList(vector<Toy> giftList)
{
    this->giftList = giftList;
}