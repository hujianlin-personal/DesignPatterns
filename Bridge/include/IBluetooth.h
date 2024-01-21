/*********************************************
 *蓝牙接口
 ********************************************/

#ifndef _I_BLUETOOTH_H_
#define _I_BLUETOOTH_H_

class IBluetooth
{
public:
    IBluetooth();
    virtual ~IBluetooth();

    virtual void Connect() = 0;
    virtual void Disconnect() = 0;
};

#endif