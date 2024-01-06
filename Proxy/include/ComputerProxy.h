/**************************
** 计算机代理类
**************************/
#include "IMachineProxy.h"

#ifndef _COMPUTERPROXY_H_
#define _COMPUTERPROXY_H_

class ComputerProxy : public IMachineProxy
{
public:
    ComputerProxy(IMachineProxy *machine);
    virtual ~ComputerProxy();
    void Boot();
    bool Start();

private:
    IMachineProxy *m_machine;
};

#endif