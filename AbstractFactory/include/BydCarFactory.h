/*****************************************
 * BYD汽车工厂
 ****************************************/

#include "IAbstractCarFactory.h"

#ifndef _BYD_CAR_FACTORY_H_
#define _BYD_CAR_FACTORY_H_

class BydCarFactory : public IAbstractCarFactory
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
    BydCarFactory();
    //析构函数
    ~BydCarFactory();

private:
    static IAbstractCarFactory *m_instance; //单例指针
};

#endif
