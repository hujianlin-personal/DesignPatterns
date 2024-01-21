#include "BydCarFactory.h"
#include "BydElectricCar.h"
#include "BydOilCar.h"
#include <iostream>

using namespace std;

IAbstractCarFactory *BydCarFactory::m_instance = new BydCarFactory();

BydCarFactory::BydCarFactory() : IAbstractCarFactory("BYD")
{
}

BydCarFactory::~BydCarFactory()
{
}

IAbstractCarFactory *BydCarFactory::GetInstance()
{
    return m_instance;
}

void BydCarFactory::ReleaseInstance()
{
    if (NULL != m_instance)
    {
        delete m_instance;
        m_instance = NULL;
    }
}

ICar *BydCarFactory::CreateElectricCar()
{
    cout << "start create a new electric car"
         << "\n";
    ElectricPoweredCar *ret = new BydElectricCar();
    ret->SetBatteryCapacity(80);
    cout << "finish create a new electric car"
         << "\n";
    return ret;
}

ICar *BydCarFactory::CreateOilCar()
{
    cout << "start create a new oil car"
         << "\n";
    OilPoweredCar *temp = new BydOilCar();
    temp->SetTankCapacity(52.0);
    cout << "finish create a new oil car;"
         << "\n";
    return temp;
}