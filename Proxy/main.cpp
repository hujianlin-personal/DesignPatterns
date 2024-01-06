#include "IMachineProxy.h"
#include "ComputerProxy.h"
#include "CarProxy.h"
#include "SmartPhotoProxy.h"
#include <iostream>

using namespace std;

void TestCar()
{
    cout << "Begin TestCar" << endl;
    ComputerProxy *carComputer = new ComputerProxy(new CarProxy());
    carComputer->Boot();
    carComputer->Start();

    delete carComputer;
    cout << "End TestCar" << endl;
}

void TestSmartPhone()
{
    cout << "Begin TestSmartPhone" << endl;
    ComputerProxy *phoneComputer = new ComputerProxy(new SmartPhoneProxy());
    phoneComputer->Boot();
    phoneComputer->Start();

    delete phoneComputer;

    cout << "End TestSmartPhone" << endl;
}

int main(int argc, char *argv[])
{
    TestCar();
    TestSmartPhone();

    return 0;
}