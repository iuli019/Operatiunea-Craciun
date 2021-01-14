#ifndef SANTA_H
#define SANTA_H
#include <iostream>
#include <vector>
using namespace std;

class Santa
{
private:
    vector<string> cities;
    vector<int> route;    // list with the position of the cities
    vector<string> Route; // the list of cities through which it will pass in order
    int citiesNumber = 6;
    int distances[6][6] = {{0, 9202, 9600, 9670, 10032, 9439}, // the adjacent matrix of distances between cities
                           {9202, 0, 560, 476, 1080, 241},
                           {9600, 560, 0, 312, 1169, 383},
                           {9670, 476, 312, 0, 861, 235},
                           {10032, 1080, 1169, 861, 0, 947},
                           {9439, 241, 383, 235, 947, 0}};

public:
    Santa();
    ~Santa();

    void defineRoute();
    int totalDistance();
    void stringRoute();

    // getters and setters
    vector<string> getCities();
    void setCities(vector<string> cities);
    vector<string> getRoute();
    vector<int> getRoutePoints();
};

#endif