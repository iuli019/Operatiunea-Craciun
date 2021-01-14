#include "santa.h"

Santa::Santa(){};
Santa::~Santa(){};

// defines the order of the cities
void Santa::defineRoute()
{
    int cities[6] = {0, 0, 0, 0, 0, 0}; // 0 - not visited 1- visited
    int c = 0;                          // current location

    // add the departure city and mark as visited
    route.push_back(0);
    cities[0] = 1;

    // iterate the matrix of distances
    for (int i = 0; i < citiesNumber; i++)
    {
        int min = 9999;

        for (int j = 0; j < citiesNumber; j++)
        {
            if (cities[j] == 0 && distances[c][j] < min) // if there are not visited cities we calculate the next min distance
            {
                min = distances[c][j];
            }
        }
        //iterate once again to find min distance
        for (int j = 0; j < citiesNumber; j++)
        {
            if (distances[c][j] == min)
            {
                route.push_back(j); //add the citi to route
                c = j;              // set the city index
                cities[j] = 1;      // marked as visited
                break;
            }
        }
    }
}

// calculate the final distance of the route
int Santa::totalDistance()
{
    int distance = 0;
    for (int i = 0; i < citiesNumber - 1; i++)
    {
        distance = distance + distances[route[i]][route[i + 1]];
    }
    return distance;
}

// vector<string> with the name of the cities in order
void Santa::stringRoute()
{
    Route.push_back("Rovaniemi");

    for (int i = 1; i < citiesNumber; i++)
    {
        Route.push_back(cities[route[i] - 1]);
    }
}

vector<string> Santa::getRoute()
{
    return Route;
}

vector<int> Santa::getRoutePoints()
{
    return route;
}
vector<string> Santa::getCities()
{
    return this->cities;
}

void Santa::setCities(vector<string> cities)
{
    this->cities = cities;
}