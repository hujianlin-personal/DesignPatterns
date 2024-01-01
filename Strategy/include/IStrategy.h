/**************************************
 * 策略接口
 **************************************/

#ifndef _ISTRATEGY_H_
#define _ISTRATEGY_H_

class IStrategy
{
public:
    IStrategy();
    virtual ~IStrategy();
    virtual void Operate() = 0;
};

#endif