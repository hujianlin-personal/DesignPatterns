/******************************
 *XM手机
 *****************************/

#ifndef _XM_PHONE_H_
#define _XM_PHONE_H_

#include <Phone.h>

class XMPhone : public Phone
{
public:
    XMPhone(IBluetooth *bluetooth);
    virtual ~XMPhone();

    void TestBluetoothFunction();
};

#endif