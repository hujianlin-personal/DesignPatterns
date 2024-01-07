/****************************************
 * 燃油车类
 ***************************************/

#include "ICar.h"
#include <string>

#ifndef _OIL_POWERED_CAR_H
#define _OIL_POWERED_CAR_H

class OilPoweredCar : public ICar
{
public:
    //构造函数
    OilPoweredCar(std::string brand);
    //析构函数
    virtual ~OilPoweredCar();
    //运行
    virtual void Run();
    //停止
    virtual void Stop();
    //获取油箱容量
    virtual double GetTankCapacity();
    //设置油箱容量
    virtual void SetTankCapacity(double capacity);

private:
    double m_tankCapacity; //油箱容量（L）
};

#endif
