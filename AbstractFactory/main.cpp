#include "ICar.h"
#include "TeslaElectricCar.h"
#include "TeslaOilCar.h"
#include "BydElectricCar.h"
#include "BydOilCar.h"
#include "IAbstractCarFactory.h"
#include "TeslaCarFactory.h"
#include "BydCarFactory.h"
#include <iostream>

using namespace std;

void TestByd()
{
    IAbstractCarFactory *factory = BydCarFactory::GetInstance();
    ICar *eleCar = factory->CreateElectricCar();
    eleCar->Run();
    eleCar->Stop();

    ICar *oilCar = factory->CreateOilCar();
    oilCar->Run();
    oilCar->Stop();

    delete eleCar;
    delete oilCar;
}

void TestTesla()
{
    IAbstractCarFactory *factory = TeslaCarFactory::GetInstance();
    ICar *eleCar = factory->CreateElectricCar();
    eleCar->Run();
    eleCar->Stop();

    ICar *oilCar = factory->CreateOilCar();
    oilCar->Run();
    oilCar->Stop();

    delete eleCar;
    delete oilCar;
}

int main()
{
    TestByd();
    cout << "--------------------------------------"
         << "\n";
    TestTesla();
    return 0;
}