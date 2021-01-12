#include <iostream>
#include "mrsSanta.h"

using namespace std;

void MrsSanta::extraCost()
{
    cout << "Extra cost: " << lollipopsNumber + embersNumber * 0.5 << endl;
}

void MrsSanta::setLollipopsNumber(int lollipopsNumber)
{
    this->lollipopsNumber = lollipopsNumber;
}

void MrsSanta::setEmbersNumber(int embersNumber)
{
    this->embersNumber = embersNumber;
}

int MrsSanta::getLollipopsNumber()
{
    return this->lollipopsNumber;
}

int MrsSanta::getEmbersNumber()
{
    return this->embersNumber;
}