#include "troll.h"
#include "create.h"
#include <iostream>
#include <vector>

using namespace std;

vector<Toy> Troll::getToyList()
{
    return this->toyList;
}

void Troll::setToyList(vector<Toy> toyList)
{
    this->toyList = toyList;
}

int Troll::getGirlsPacks()
{
    return this->girlsPacks;
}

void Troll::setGirlsPacks(int girlsPacks)
{
    this->girlsPacks = girlsPacks;
}

int Troll::getBoysPacks()
{
    return this->boysPacks;
}

void Troll::setBoysPacks(int boysPacks)
{
    this->boysPacks = boysPacks;
}

int Troll::getEmbers()
{
    return this->embers;
}

void Troll::setEmbers(int embers)
{
    this->embers = embers;
}

// int Troll::trollPack()
// {
//     int girls = 0;

//     for (int i = 0; i < lettersNumber; i++)
//     {
//         (*letters)[i].setGiftPacked(true);
//         if ((*letters)[i].getEnvelopeColor().compare("pink") == 0)
//         {
//             girls++;
//         }
//     }
//     return girls;
// }
// int Troll::trollAddEmbers()
// {
//     int embers = 0;
//     for (int i = 0; i < lettersNumber; i++)
//     {

//         if ((*letters)[i].getAllocatedBudget() == 10)
//         {
//             (*letters)[i].setEmbersNumber(1);
//             embers++;
//         }
//     }
//     return embers;
// }