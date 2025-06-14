/**************************************
 * 通勤策略接口
 **************************************/

#ifndef _ISTRATEGY_H_
#define _ISTRATEGY_H_

class ITransportStrategy
{
public:
    virtual ~ITransportStrategy() = default;
    virtual void Transport() = 0;
};

#endif