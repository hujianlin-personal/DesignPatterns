#include <XMPhone.h>
#include <string>
#include <iostream>

using namespace std;

XMPhone::XMPhone(IBluetooth *bluetooth) : Phone(bluetooth)
{
}

XMPhone::~XMPhone()
{
}

void XMPhone::TestBluetoothFunction()
{
    cout << "XM phone tests bluetooth function" << endl;
    this->m_bluetooth->Connect();
    this->m_bluetooth->Disconnect();
}