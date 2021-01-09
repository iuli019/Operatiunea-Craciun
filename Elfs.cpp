#include <iostream>
#include "Toy.h"
#include "ChildLetter.h"
#include "Status.h"
using namespace std;

class Elfs
{
private:
    Toy stock[5];
    ChildLetter childrensList[6];
    Status status[6];

public:
    Elfs(Toy stock[5], ChildLetter childrensList[5], Status status[5])
    {
        for (int i = 0; i <= 5; i++)
        {
            this->stock[i] = stock[i];
            this->childrensList[i] = childrensList[i];
            this->status[i] = status[i];
        }
    }

    void assignBudget(ChildLetter childrensList[5], Status status[5])
    {
        for (int i = 0; i <= 5; i++)
        {
            if (childrensList[i].getFistName().compare(status[i].getFirstName()) == 0 && childrensList[i].getLastName().compare(status[i].getLastName()) == 0)
            {
                if (status[i].getIsGood())
                {
                    childrensList[i].setBudgetAllocated(100);
                }
                else
                {
                    childrensList[i].setBudgetAllocated(10);
                }
            }
        }
    }
};