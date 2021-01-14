#include <iostream>
#include <vector>
#include "letter.h"
#include "toy.h"
#include "elf.h"
#include "troll.h"
#include "mrsSanta.h"
#include "santa.h"
#include "create.h"

using namespace std;

int main()
{
    // initializing letters
    vector<Letter> letters = createLetterList();

    //create Elf
    Elf elf;
    // alocate bugdet and set the gifts for each child
    elf.allocateBudget(&letters);
    elf.chooseGifts(&letters);
    // print the gifts received
    for (int i = 0; i < lettersNumber; i++)
    {
        letters[i].print();
    }
    cout << endl;

    //create Troll
    Troll troll;
    //give giftList from elf to troll
    vector<Toy> giftList = elf.getGiftList(letters);
    troll.setGiftList(giftList);
    // adding embers
    troll.addEmbers(&letters);
    // calculate packs type
    int packagesForGirls = troll.packGifts(&letters);
    int packagesForBoys = lettersNumber - packagesForGirls;

    cout << "Packages for girls: " << packagesForGirls << endl;
    cout << "Packages for boys: " << packagesForBoys << endl;
    cout << endl;

    // create mrsSanta
    MrsSanta mrsSanta;

    // give lollipops from elf and embers from troll to mrsSanta
    int lollipops = elf.calculateNumberOf(letters);
    int embers = troll.calculateNumberOf(letters);

    mrsSanta.setLollipopsNumber(lollipops);
    mrsSanta.setEmbersNumber(embers);
    cout << "Embers number: " << mrsSanta.getEmbersNumber() << endl
         << "Lollipops Number: " << mrsSanta.getLollipopsNumber() << endl;

    //calculate extra cost
    mrsSanta.extraCost();
    cout << endl;

    // create Santa
    Santa santa;
    // pass city list from elf
    vector<string> cities = elf.cities(letters);
    santa.setCities(cities);
    // define route and calculate distance
    santa.defineRoute();
    int totalDistance = santa.totalDistance();
    santa.stringRoute();
    vector<string> route = santa.getRoute();
    vector<int> order = santa.getRoutePoints();

    cout << "Total distance: " << totalDistance << " km" << endl;
    print(route);
    print(order);

    // pas the route to mrsSanta
    mrsSanta.setRoute(route);
    return 0;
}
