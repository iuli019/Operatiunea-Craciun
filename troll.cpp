#include "troll.h"
#include "create.h"
#include <iostream>
#include <vector>

using namespace std;

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
int Troll::addEmbers(vector<Letter> *letters)
{
    int embers = 0;
    vector<bool> isGood = this->getIsGood();
    for (int i = 0; i < lettersNumber; i++)
    {

        if (!isGood[i])
        {
            (*letters)[i].setEmbersNumber(1);
            embers++;
        }
    }
    return embers;
}

vector<Toy> Troll::getGiftList()
{
    return this->giftList;
}
void Troll::setGiftList(vector<Toy> giftList)
{
    this->giftList = giftList;
}