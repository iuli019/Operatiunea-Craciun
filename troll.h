#ifndef TROLL_H
#define TROLL_H
#include <iostream>
#include <vector>
using namespace std;

class Troll
{
private:
    vector<Toy> toyList;
    int girlsPacks;
    int boysPacks;
    int embers;

public:
    int trollPack();
    int trollAddEmbers();

    vector<Toy> getToyList();
    void setToyList(vector<Toy> toyList);
    int getGirlsPacks();
    void setGirlsPacks(int girlsPacks);
    int getBoysPacks();
    void setBoysPacks(int boysPacks);
    int getEmbers();
    void setEmbers(int embers);
};

#endif
