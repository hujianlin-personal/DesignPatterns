#include "LaptopComputer.h"
#include <string>
#include <iostream>

using namespace std;

LaptopComputer::LaptopComputer()
{
}

LaptopComputer::~LaptopComputer()
{
}

void LaptopComputer::Boot()
{
    cout << "A laptop computer is booting" << endl;
}

void LaptopComputer::LoadOS()
{
    cout << "A laptop computer is loading OS" << endl;
}

void LaptopComputer::DisplayLandingPage()
{
    cout << "A laptop computer displays the landing page" << endl;
}