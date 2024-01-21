/***********************************
 * 电动汽车类
 **********************************/

#include "ICar.h"

#ifndef _ELECTRIC_POWERED_CAR_H_
#define _ELECTRIC_POWERED_CAR_H_

class ElectricPoweredCar : public ICar
{
public:
    //构造函数
    ElectricPoweredCar(std::string brand);
    //析构函数
    virtual ~ElectricPoweredCar();
    //运行
    virtual void Run();
    //停止
    virtual void Stop();
    //获取电池容量
    virtual int GetBatteryCapacity();
    //设置电池容量
    virtual void SetBatteryCapacity(int capacity);

private:
    int m_batteryCapacity; //电池容量
};

#endif