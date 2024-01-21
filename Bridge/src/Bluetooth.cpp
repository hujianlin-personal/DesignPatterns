#include <Bluetooth.h>
#include <string>
#include <iostream>

using namespace std;

Bluetooth::Bluetooth()
{
}

Bluetooth::~Bluetooth()
{
}

void Bluetooth::Connect()
{
    cout << "Bluetooth connected" << endl;
}

void Bluetooth::Disconnect()
{
    cout << "Bluetooth disconnect" << endl;
}