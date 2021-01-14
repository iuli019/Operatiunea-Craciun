#include <iostream>
#include <vector>
#include "mrsSanta.h"

using namespace std;

MrsSanta::MrsSanta(){};
MrsSanta::~MrsSanta(){};

// calculate the extra cost
void MrsSanta::extraCost()
{
    cout << "Extra cost: " << lollipopsNumber + embersNumber * 0.5 << endl;
}

//getters & setters

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

vector<string> MrsSanta::getRoute()
{
    return this->route;
}

void MrsSanta::setRoute(vector<string> route)
{
    this->route = route;
}