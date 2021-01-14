#ifndef MRSSANTA_H
#define MRSSANTA_H
#include <iostream>
using namespace std;

class MrsSanta
{
private:
    int lollipopsNumber;
    int embersNumber;
    vector<string> route;

public:
    MrsSanta();
    ~MrsSanta();

    void extraCost();
    // getters and setters
    void setLollipopsNumber(int lollipopsNumber);
    void setEmbersNumber(int embersNumber);
    int getLollipopsNumber();
    int getEmbersNumber();
    vector<string> getRoute();
    void setRoute(vector<string> route);
};

#endif