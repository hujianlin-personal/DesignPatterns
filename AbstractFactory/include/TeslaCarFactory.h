/***************************
 * Tesla汽车工厂
 **************************/

#include "IAbstractCarFactory.h"

#ifndef _TESLA_CAR_FACTORY_H_
#define _TESLA_CAR_FACTORY_H_

class TeslaCarFactory : public IAbstractCarFactory
{
public:
    //获取单例指针
    static IAbstractCarFactory *GetInstance();
    //释放单例指针
    static void ReleaseInstance();
    //生产一辆电车
    ICar *CreateElectricCar();
    //生产一辆油车
    ICar *CreateOilCar();

private:
    //构造函数
    TeslaCarFactory();
    //析构函数
    ~TeslaCarFactory();

private:
    static IAbstractCarFactory *m_instance; //单例指针
};

#endif
