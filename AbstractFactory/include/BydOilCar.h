/********************************************************
 * BYD燃油车
 ********************************************************/

#include "OilPoweredCar.h"

#ifndef _BYD_OIL_CAR_H_
#define _BYD_OIL_CAR_H_

class BydOilCar : public OilPoweredCar
{
public:
    //构造函数
    BydOilCar();
    //析构函数
    ~BydOilCar();
    //运行
    void Run();
    //停止
    void Stop();
};

#endif