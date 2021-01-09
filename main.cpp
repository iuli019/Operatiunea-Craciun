#include <iostream>
#include <vector>
#include "letter.h"
#include "toy.h"

using namespace std;

int main()
{
    Toy robotDog("robotDog", 15);
    cout << robotDog.getName();

    Letter letter1("Popescu", "Irina", 9, "Analalava", "pink", "doll, lego, cards");
    Letter letter2("Semenescu", "Paul", 5, "Antsalova", "blue", "doll, lego, cards");
    Letter letter3("Adam", "Carol", 7, "Antananarivo", "blue", "doll, lego, cards");
    Letter letter4("Dumitrescu", "Ana", 8, "Manja", "pink", "doll, lego, cards");
    Letter letter5("Ene", "Simona", 10, "Tsaratanana", "pink", "doll, lego, cards");

    vector<Letter> letters = {letter1, letter2, letter3, letter4, letter5};
    for (int i = 0; i <= 5; i++)
    {
        cout << letters[i].getLastName() << endl;
    }
    return 0;
}
