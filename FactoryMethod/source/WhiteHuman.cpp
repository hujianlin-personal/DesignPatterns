#include "WhiteHuman.h"
#include <iostream>

using namespace std;

WhiteHuman::WhiteHuman(HumanGenderType gender) : IHuman(gender, Race_White)
{
    cout << "create a white human, the gender is " << gender << "\n";
}

WhiteHuman::~WhiteHuman()
{
}

void WhiteHuman::Walk()
{
    cout << "here is a white human walking"
         << "\n";
    cout << "the gender is " << this->Gender() << "\n";
}

void WhiteHuman::Eat()
{
    cout << "here is a white human eating"
         << "\n";
    cout << "the gender is " << this->Gender() << "\n";
}