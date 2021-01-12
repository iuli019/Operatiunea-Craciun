#ifndef SANTA_H
#define SANTA_H
#include <iostream>
#include <vector>
using namespace std;

class Santa
{
private:
    vector<string> cities;

public:
    vector<string> getCities();

    void setCities(vector<string> cities);
};

#endif