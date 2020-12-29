#include <iostream>
#include "Toy.cpp"
#include "ChildLetter.cpp"
#include "Status.cpp"
using namespace std;

class Elfs
{
private:
    Toy toyList[4];
    ChildLetter childrensList[4];
    Status status[4];

public:
    Elfs(Toy toyList[4], ChildLetter childrensList[4], Status status[4])
    {
        for (int i = 0; i <= 4; i++)
        {
            this->toyList[i] = toyList[i];
            this->childrensList[i] = childrensList[i];
            this->status[i] = status[i];
        }
    }
};