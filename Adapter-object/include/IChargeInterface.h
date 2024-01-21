/******************************
 * 充电接口
 *****************************/

#ifndef _ICHARGEINTERFACE_H_
#define _ICHARGEINTERFACE_H_

class IChargeInterface
{
public:
    IChargeInterface();
    ~IChargeInterface();
    virtual void Charge5V() = 0;
};

#endif