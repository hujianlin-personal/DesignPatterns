#include <Bluetooth.h>
#include <HWPhone.h>
#include <XMPhone.h>
#include <iostream>

using namespace std;

int main()
{
    IBluetooth *bluetooth = new Bluetooth();
    Phone *hw = new HWPhone(bluetooth);
    Phone *xm = new XMPhone(bluetooth);

    hw->TestBluetoothFunction();
    cout << "**************************" << endl;
    xm->TestBluetoothFunction();

    delete hw;
    delete xm;

    return 0;
}