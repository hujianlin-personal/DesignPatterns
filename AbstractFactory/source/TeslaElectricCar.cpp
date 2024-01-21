#include "TeslaElectricCar.h"
#include <iostream>

using namespace std;

TeslaElectricCar::TeslaElectricCar() : ElectricPoweredCar("Tesla")
{
}

TeslaElectricCar::~TeslaElectricCar()
{
}

void TeslaElectricCar::Run()
{
    cout << "a Tesla is running"
         << "\n";
}

void TeslaElectricCar::Stop()
{
    cout << "a Tesla stopped"
         << "\n";
}
