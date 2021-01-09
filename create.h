#ifndef CREATE_H
#define CREATE_H
#include <vector>
#include "toy.h"
#include "letter.h"

// vector<Toy> createToyList()
// {
//     Toy doll("doll", 20);
//     Toy fidgetSpinner("fidgetSpinner", 5);
//     Toy robotDog("robotDog", 15);
//     Toy lego("lego", 50);
//     Toy uno("uno", 5);
//     Toy puzzle("puzzle", 20);
//     Toy whistle("whistle", 10); // out de pe inventar
//     Toy cards("cards", 5);
//     Toy babyYoda("babyYoda", 30);
//     Toy ball("ball", 25);
//     Toy bike("bike", 70);
//     Toy car("car", 30);
//     Toy nintendo("nintendo", 140);

//     vector<Toy> toysList = {doll, fidgetSpinner, robotDog, lego, uno, puzzle, whistle, cards, babyYoda, ball, bike, car, nintendo};
//     return toysList;
// }

vector<Letter> createLetterList()
{
    Letter letter1("Popescu", "Irina", 9, "Analalava", "pink", "doll, lego, cards");
    Letter letter2("Semenescu", "Paul", 5, "Antsalova", "blue", "doll, lego, cards");
    Letter letter3("Adam", "Carol", 7, "Antananarivo", "blue", "doll, lego, cards");
    Letter letter4("Dumitrescu", "Ana", 8, "Manja", "pink", "doll, lego, cards");
    Letter letter5("Ene", "Simona", 10, "Tsaratanana", "pink", "doll, lego, cards");

    vector<Letter> letters = {letter1, letter2, letter3, letter4, letter5};
    return letters;
}
#endif