#include "TeslaOilCar.h"
#include <iostream>

using namespace std;

TeslaOilCar::TeslaOilCar() : OilPoweredCar("Tesla")
{
}

TeslaOilCar::~TeslaOilCar()
{
}

void TeslaOilCar::Run()
{
    cout << "a Tesla is running"
         << "\n";
}

void TeslaOilCar::Stop()
{
    cout << "a Tesla stopped"
         << "\n";
}