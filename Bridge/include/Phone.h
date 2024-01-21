/*********************************
 *手机
 ********************************/

#ifndef _PHONE_H_
#define _PHONE_H_

#include <IBluetooth.h>

class Phone
{
public:
    Phone(IBluetooth *bluetooth);
    virtual ~Phone();

    virtual void TestBluetoothFunction() = 0;

protected:
    IBluetooth *m_bluetooth;
};

#endif