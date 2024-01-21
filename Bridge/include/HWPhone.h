/*******************************
 *HW手机
 ******************************/

#ifndef _HW_PHONE_H_
#define _HW_PHONE_H_

#include <Phone.h>

class HWPhone : public Phone
{
public:
    HWPhone(IBluetooth *bluetooth);
    virtual ~HWPhone();

    void TestBluetoothFunction();
};

#endif