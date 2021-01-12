#ifndef MRSSANTA_H
#define MRSSANTA_H

class MrsSanta
{
private:
    int lollipopsNumber;
    int embersNumber;

public:
    void extraCost();

    void setLollipopsNumber(int lollipopsNumber);
    void setEmbersNumber(int embersNumber);
    int getLollipopsNumber();
    int getEmbersNumber();
};

#endif