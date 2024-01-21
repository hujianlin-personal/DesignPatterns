#include "DesktopComputer.h"
#include <string>
#include <iostream>

using namespace std;

DesktopComputer::DesktopComputer()
{
}

DesktopComputer::~DesktopComputer()
{
}

void DesktopComputer::Boot()
{
    cout << "A desktop computer is booting" << endl;
}

void DesktopComputer::LoadOS()
{
    cout << "A desktop computer is loading OS" << endl;
}

void DesktopComputer::DisplayLandingPage()
{
    cout << "A desktop computer displays the landing page" << endl;
}