/**************************************
 *智能手机代理类
 **************************************/

#include "IMachineProxy.h"

#ifndef _SAMRTPHONE_H_
#define _SAMRTPHONE_H_

class SmartPhoneProxy : public IMachineProxy
{
public:
    SmartPhoneProxy();
    ~SmartPhoneProxy();
    void Boot();
    bool Start();
};

#endif