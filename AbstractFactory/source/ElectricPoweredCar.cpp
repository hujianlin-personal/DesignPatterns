#include "ElectricPoweredCar.h"
#include <iostream>

using namespace std;

ElectricPoweredCar::ElectricPoweredCar(string brand) : ICar(brand)
{
}

ElectricPoweredCar::~ElectricPoweredCar()
{
}

void ElectricPoweredCar::Run()
{
    cout << "a electric car{" << this->Brand() << "} is running"
         << "\n";
}

void ElectricPoweredCar::Stop()
{
    cout << "a electric car{" << this->Brand() << "} stopped"
         << "\n";
}

int ElectricPoweredCar::GetBatteryCapacity()
{
    return this->m_batteryCapacity;
}

void ElectricPoweredCar::SetBatteryCapacity(int capacity)
{
    this->m_batteryCapacity = capacity;
}