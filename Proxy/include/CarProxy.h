/****************************************
 * 汽车代理类
 ****************************************/

#include "IMachineProxy.h"

#ifndef _CARPROXY_H_
#define _CARPROXY_H_

class CarProxy : public IMachineProxy
{
public:
    CarProxy();
    ~CarProxy();
    void Boot();
    bool Start();
};

#endif
