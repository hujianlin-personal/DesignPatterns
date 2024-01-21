#include "CComputer.h"

Computer::Computer()
{
}

Computer::~Computer()
{
}

void Computer::Startup()
{
    this->Boot();
    this->LoadOS();
    this->DisplayLandingPage();
}