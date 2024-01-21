/***************************************
 * BYD电动汽车
 **************************************/

#include "ElectricPoweredCar.h"

#ifndef _BYD_ELECTRIC_CAR_H_
#define _BYD_ELECTRIC_CAR_H_

class BydElectricCar : public ElectricPoweredCar
{
public:
    //构造函数
    BydElectricCar();
    //析构函数
    ~BydElectricCar();
    //运行
    void Run();
    //停止
    void Stop();
};

#endif