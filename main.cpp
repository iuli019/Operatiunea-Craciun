#include <iostream>
#include <vector>
#include "letter.h"
#include "toy.h"
#include "elf.h"
#include "troll.h"
#include "mrsSanta.h"
#include "create.h"

using namespace std;

int main()
{

    vector<Letter> letters = createLetterList();
    Elf elf;

    elf.allocateBudget(&letters);
    elf.chooseGifts(&letters);

    
    return 0;
}
