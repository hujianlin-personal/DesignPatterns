/**************************************
 * 公共汽车通勤策略
 **************************************/

#include "ITransportStrategy.h"

#ifndef _Bus_H_
#define _Bus_H_

class Bus : public ITransportStrategy
{
public:
    Bus() = default;
    ~Bus() = default;
    // 实现ITransportStrategy接口的Transport方法
    void Transport() override;
    ;
};

#endif