#include "create.h"

int lettersNumber = 5;

Toy defaultGift100("bigLegoSet", 100);
Toy defaultGift10("coloringBook", 10);

vector<Toy> createToyList()
{
    Toy doll("doll", 20);
    Toy fidgetSpinner("fidgetSpinner", 5);
    Toy robotDog("robotDog", 15);
    Toy lego("lego", 50);
    Toy uno("uno", 5);
    Toy puzzle("puzzle", 20);
    Toy whistle("whistle", 10); // out de pe inventar
    Toy cards("cards", 5);
    Toy babyYoda("babyYoda", 30);
    Toy ball("ball", 25);
    Toy bike("bike", 70);
    Toy car("car", 30);
    Toy nintendo("nintendo", 140);

    vector<Toy> toysList = {doll, fidgetSpinner, robotDog, lego, uno, puzzle, whistle, cards, babyYoda, ball, bike, car, nintendo};
    return toysList;
}

vector<Letter> createLetterList()
{
    Letter letter1("Popescu", "Irina", 9, "Analalava", "pink", {"doll", "lego", "cards"});      // ok + lolli
    Letter letter2("Semenescu", "Paul", 5, "Antsalova", "blue", {"nintendo", "lego", "cards"}); // default 10
    Letter letter3("Adam", "Carol", 7, "Antananarivo", "blue", {"nintendo", "lego", "cards"});  // default 100
    Letter letter4("Dumitrescu", "Ana", 8, "Manja", "pink", {"blah", "blah", "bl"});            // nimic pe inventar
    Letter letter5("Ene", "Simona", 10, "Tsaratanana", "pink", {"doll", "lego", "bike"});       // doar 2 jucarii + lolli

    vector<Letter> letters = {letter1, letter2, letter3, letter4, letter5};

    return letters;
}

vector<bool> createIsGoodList()
{
    return {true, false, true, false, true};
}