/**************************************
 * 汽车通勤策略
 **************************************/

#include "ITransportStrategy.h"

#ifndef _CAR_H_
#define CAR

class Car : public ITransportStrategy
{
public:
    Car() = default;
    ~Car() = default;
    // 实现ITransportStrategy接口的Transport方法
    void Transport();
};

#endif