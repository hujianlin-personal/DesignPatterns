#include "BydElectricCar.h"
#include <iostream>

using namespace std;

BydElectricCar::BydElectricCar() : ElectricPoweredCar("BYD")
{
}

BydElectricCar::~BydElectricCar()
{
}

void BydElectricCar::Run()
{
    cout << "a BYD is running"
         << "\n";
}

void BydElectricCar::Stop()
{
    cout << "a BYD stoppped"
         << "\n";
}