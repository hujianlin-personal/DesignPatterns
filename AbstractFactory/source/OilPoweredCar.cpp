#include "OilPoweredCar.h"
#include <iostream>

using namespace std;

OilPoweredCar::OilPoweredCar(string brand) : ICar(brand)
{
}

OilPoweredCar::~OilPoweredCar()
{
}

void OilPoweredCar::Run()
{
    cout << "a oil car{" << this->Brand() << "} is running"
         << "\n";
}

void OilPoweredCar::Stop()
{
    cout << "a oil car{" << this->Brand() << "} stopped"
         << "\n";
}

double OilPoweredCar::GetTankCapacity()
{
    return this->m_tankCapacity;
}

void OilPoweredCar::SetTankCapacity(double capacity)
{
    this->m_tankCapacity = capacity;
}