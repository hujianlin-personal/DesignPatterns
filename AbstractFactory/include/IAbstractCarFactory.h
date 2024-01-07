/****************************************
 * 抽象汽车工厂类
 ***************************************/

#include "ICar.h"

#ifndef _IABSTRACT_CAR_FACTORY_H_
#define _IABSTRACT_CAR_FACTORY_H_

class IAbstractCarFactory
{
public:
    //构造函数
    IAbstractCarFactory(std::string owner);
    //析构函数
    virtual ~IAbstractCarFactory();
    //生产一辆油车
    virtual ICar *CreateOilCar() = 0;
    //生产一辆电车
    virtual ICar *CreateElectricCar() = 0;

private:
    std::string m_owner; //所有者
};

#endif