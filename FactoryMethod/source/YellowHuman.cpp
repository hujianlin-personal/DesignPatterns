#include "YellowHuman.h"
#include <iostream>

using namespace std;

YellowHuman::YellowHuman(HumanGenderType gender) : IHuman(gender, Race_Yellow)
{
    cout << "create a yellow human, the gender is " << gender << "\n";
}

YellowHuman::~YellowHuman()
{
}

void YellowHuman::Walk()
{
    cout << "here is a yellow human walking"
         << "\n";
    cout << "the gender is " << this->Gender() << "\n";
}

void YellowHuman::Eat()
{
    cout << "here is a yellow human eating"
         << "\n";
    cout << "the gender is " << this->Gender() << "\n";
}