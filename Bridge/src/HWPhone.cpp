#include <HWPhone.h>
#include <string>
#include <iostream>

using namespace std;

HWPhone::HWPhone(IBluetooth *bluetooth) : Phone(bluetooth)
{
}

HWPhone::~HWPhone()
{
}

void HWPhone::TestBluetoothFunction()
{
    cout << "HW phone tests bluetooth function" << endl;
    this->m_bluetooth->Connect();
    this->m_bluetooth->Disconnect();
}