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

    vector<Letter> letters = createLetterList();
    Elf elf;
    elf.allocateBudget(&letters);
    elf.chooseGifts(&letters);
    for (int i = 0; i < lettersNumber; i++)
    {
        letters[i].print();
    }
    cout << endl;
    Troll troll;

    vector<Toy> giftList = elf.getGiftList(letters);
    troll.setGiftList(giftList);

    int packagesForGirls = troll.packGifts(&letters);
    int packagesForBoys = lettersNumber - packagesForGirls;

    cout << "Packages for girls: " << packagesForGirls << endl;
    cout << "Packages for boys: " << packagesForBoys << endl;
    cout << endl;
    MrsSanta mrsSanta;
    int lollipops = elf.lollipops(letters);
    int embers = troll.addEmbers(&letters);

    mrsSanta.setLollipopsNumber(lollipops);
    mrsSanta.setEmbersNumber(embers);
    cout << mrsSanta.getEmbersNumber() << " " << mrsSanta.getLollipopsNumber() << endl;

    mrsSanta.extraCost();
    cout << endl;
    Santa santa;
    vector<string> cities = elf.cities(letters);
    santa.setCities(cities);

    return 0;
}
