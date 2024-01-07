/****************************
 * Tesla电动车类
 ***************************/

#include "ElectricPoweredCar.h"

#ifndef _TESLA_H_
#define _TESLA_H_

class TeslaElectricCar : public ElectricPoweredCar
{
public:
    //构造函数
    TeslaElectricCar();
    //析构函数
    virtual ~TeslaElectricCar();
    //运行
    void Run();
    //停止
    void Stop();
};

#endif