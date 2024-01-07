#include "TeslaCarFactory.h"
#include "TeslaElectricCar.h"
#include "TeslaOilCar.h"
#include <iostream>

using namespace std;

IAbstractCarFactory *TeslaCarFactory::m_instance = new TeslaCarFactory();

TeslaCarFactory::TeslaCarFactory() : IAbstractCarFactory("Tesla")
{
}

TeslaCarFactory::~TeslaCarFactory()
{
}

IAbstractCarFactory *TeslaCarFactory::GetInstance()
{
    return m_instance;
}

void TeslaCarFactory::ReleaseInstance()
{
    if (NULL != m_instance)
    {
        delete m_instance;
        m_instance = NULL;
    }
}

ICar *TeslaCarFactory::CreateElectricCar()
{
    cout << "start create a new electric car"
         << "\n";
    ElectricPoweredCar *ret = new TeslaElectricCar();
    ret->SetBatteryCapacity(78);
    cout << "finish create a new electric car"
         << "\n";
    return ret;
}

ICar *TeslaCarFactory::CreateOilCar()
{
    cout << "start create a new oil car"
         << "\n";
    OilPoweredCar *temp = new TeslaOilCar();
    temp->SetTankCapacity(48.7);
    cout << "finish create a new oil car"
         << "\n";
    return temp;
}