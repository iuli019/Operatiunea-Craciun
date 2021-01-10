#include "elf.h"
#include "create.h"
#include "toy.h"

Elf::Elf()
{
    this->isGood = createIsGoodList();
    this->toyList = createToyList();
}
void Elf::allocateBudget(vector<Letter> *letters)
{

    for (int i = 0; i < lettersNumber; i++)
    {

        if (this->isGood[i])
        {
            (*letters)[i].setAllocatedBudget(100);
        }
        else
            (*letters)[i].setAllocatedBudget(10);
    }
}

void Elf::chooseGifts(vector<Letter> *letters)
{

    // numarul jucariilor de pe inventar
    int toysNumber = toyList.size();
    // se parcurge fiecare scrisoare in parte
    for (int j = 0; j < lettersNumber; j++)
    {

        Letter child = (*letters)[j];
        // bugetul alocat pentru cadou
        int budget = child.getAllocatedBudget();
        // numele jucariilor de pe wishlist-ul scrisorii cu index-ul j
        vector<string> presentsName = (*letters)[j].getWishList();
        // numarul cadourilor dorite
        int presentsNumber = presentsName.size();
        // jucariile primite in final
        vector<Toy> gifts;
        // valoarea jucariilor primite
        int s = 0;
        int k = 0;
        int flag = 0;
        // se parcurge vectorul cu numele jucariilor dorite
        for (int i = 0; i < presentsNumber; i++)
        {
            string present = presentsName[i];
            for (vector<Toy>::iterator it = toyList.begin(); it != toyList.end(); ++it)
            {

                int index = distance(toyList.begin(), it);
                if (present == toyList[index].getName())
                {
                    int price = toyList[index].getPrice();
                    if (price > budget && budget == 100)
                    {
                        gifts.push_back(defaultGift100);
                        s = s + 100;
                        k = 1;
                        flag = 1;
                    }
                    if (price > budget && budget == 10)
                    {

                        gifts.push_back(defaultGift10);
                        s = s + 10;
                        k = 1;
                        flag = 1;
                    }

                    if (price < budget && s + price < budget)
                    {
                        gifts.push_back(toyList[index]);
                        s = s + price;
                        k++;
                    }
                    break;
                }
            }
            if (flag == 1 || presentsNumber == k)
            {
                break;
            }
        }
        if (k == 0)
        {
            if (budget == 100)
            {
                gifts.push_back(defaultGift100);
                s = 100;
            }
            else
            {
                gifts.push_back(defaultGift10);
                s = 10;
            }
        }
        try
        {

            if (s < budget)
            {
                (*letters)[j].setLollipopsNumber(budget - s);
            }
            else
            {
                if (s > budget)
                    throw s;
            }
        }
        catch (int s)
        {
            cout << "Eroare in functia Elf::chooseGifts! s > budget, s = " << s << endl;
        }

        // //setam giftList-ul pentru fiecare scrisoare in parte
        (*letters)[j].setGiftList(gifts);
    }
}

int Elf::lollipops(vector<Letter> letters)
{
    int lollipops = 0;
    for (int i = 0; i < lettersNumber; i++)
    {
        lollipops = lollipops + letters[i].getLollipopsNumber();
    }

    return lollipops;
}

vector<string> Elf::cities(vector<Letter> letters)
{
    vector<string> cities;
    for (int i = 0; i < lettersNumber; i++)
    {
        cities.push_back(letters[i].getCity());
    }

    return cities;
}

vector<Toy> Elf::getGifts()
{
    return this->gifts;
}

void Elf::setGifts(vector<Toy> gifts)
{
    this->gifts = gifts;
}
