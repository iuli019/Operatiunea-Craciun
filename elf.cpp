#include "elf.h"
#include "create.h"
#include "toy.h"

Elf::Elf()
{
    this->toyList = createToyList();
}
Elf::~Elf(){};

// we set the budget according to the status
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

//this functions determine the gifts for every child
void Elf::chooseGifts(vector<Letter> *letters)
{

    // the number of toys in stock
    int toysNumber = toyList.size();
    // we go through every letter
    for (int j = 0; j < lettersNumber; j++)
    {
        // i named the letter as a child
        Letter child = (*letters)[j];
        // budget allocated fro the child
        int budget = child.getAllocatedBudget();
        // the names of the toys on the letter wishlist with the index j
        vector<string> presentsName = (*letters)[j].getWishList();
        //the number of gifts on the wishlist
        int presentsNumber = presentsName.size();
        // the vector for the toys received in the end
        vector<Toy> gifts;
        // value of gifts received
        int s = 0;
        // flags that help me exit the for loop(flag) or to determine the number of toys received(k)
        int k = 0;
        int flag = 0;
        // iterate toys from wishlist
        for (int i = 0; i < presentsNumber; i++)
        {

            string present = presentsName[i];
            for (vector<Toy>::iterator it = toyList.begin(); it != toyList.end(); ++it)
            {

                int index = distance(toyList.begin(), it);
                if (present == toyList[index].getName()) // verify if the specified toy (present) is in stock
                {
                    int price = toyList[index].getPrice();
                    //if the price is greater than the buget , the child will get a default gift depending on the budget
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
                    // if the price is under the budget and the value of the gifts already received + price < buget we allocate the toy
                    if (price < budget && s + price < budget)
                    {
                        gifts.push_back(toyList[index]);
                        s = s + price;
                        k++;
                    }
                    break;
                }
            }
            // if the child received a default present
            //or the number of received toys is equal to the number of presents on the wishlist we exist the loop
            if (flag == 1 || presentsNumber == k)
            {
                break;
            }
        }
        // if any gifts weren't available we give a default gift depending on the budget
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
        // verify if the gift allocation depending on the final value of them is correct
        // if it's not we throw an error
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

        // set the gifts received list for every child
        (*letters)[j].setGiftList(gifts);
    }
}

//override  calculateNumberOf method from the abstract class Helpers
int Elf::calculateNumberOf(vector<Letter> letters)
{
    int lollipops = 0;
    for (int i = 0; i < lettersNumber; i++)
    {
        lollipops = lollipops + letters[i].getLollipopsNumber();
    }

    return lollipops;
}

//return the list of cities
vector<string> Elf::cities(vector<Letter> letters)
{
    vector<string> cities;
    for (int i = 0; i < lettersNumber; i++)
    {
        cities.push_back(letters[i].getCity());
    }

    return cities;
}

// get all the presents for the trolls
vector<Toy> Elf::getGiftList(vector<Letter> letters)
{
    vector<Toy> giftList;

    for (int i = 0; i < lettersNumber; i++)
    {

        vector<Toy> individualGiftList = letters[i].getGiftList();
        int n = individualGiftList.size();
        for (int j = 0; j < n; j++)
        {
            giftList.push_back(individualGiftList[j]);
        }
    }

    return giftList;
}

vector<bool> Elf::getIsGood()
{
    return this->isGood;
}