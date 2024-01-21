/**********************************
 * Tesla燃油车
 *********************************/

#include "OilPoweredCar.h"

#ifndef _TESLA_OIL_CAR_H_
#define _TESLA_OIL_CAR_H_

class TeslaOilCar : public OilPoweredCar
{
public:
    //构造函数
    TeslaOilCar();
    //析构函数
    ~TeslaOilCar();
    //运行
    void Run();
    //停止
    void Stop();
};

#endif