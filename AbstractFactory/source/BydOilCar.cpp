#include "BydOilCar.h"
#include <iostream>

using namespace std;

BydOilCar::BydOilCar() : OilPoweredCar("HongQi")
{
}

BydOilCar::~BydOilCar()
{
}

void BydOilCar::Run()
{
    cout << "a BYD is running"
         << "\n";
}

void BydOilCar::Stop()
{
    cout << "a BYD stopped"
         << "\n";
}
