/****************************************
 * 代理接口类
 *****************************************/

#ifndef _IPROXY_H_
#define _IPROXY_H_

class IMachineProxy
{
public:
    IMachineProxy();
    virtual ~IMachineProxy();
    virtual void Boot() = 0;
    virtual bool Start() = 0;
};

#endif