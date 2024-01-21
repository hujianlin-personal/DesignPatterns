/***********************************
 *蓝牙类
 **********************************/

#ifndef _BLUETOOTH_H_
#define _BLUETOOTH_H_

#include <IBluetooth.h>

class Bluetooth : public IBluetooth
{
public:
    Bluetooth();
    virtual ~Bluetooth();

    void Connect();
    void Disconnect();
};

#endif