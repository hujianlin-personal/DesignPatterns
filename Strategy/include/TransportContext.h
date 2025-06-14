/**************************************
 * 锦囊包，用于包装策略
 **************************************/

#include "ITransportStrategy.h"

#ifndef _TRANSPORT_CONTEXT_H_
#define _TRANSPORT_CONTEXT_H_

class TransportContext
{
public:
    TransportContext();
    ~TransportContext();

    // 设置运输策略
    // 传入一个实现了ITransportStrategy接口的策略对象
    void SetStrategy(ITransportStrategy *strategy);
    // 执行运输策略
    void Transport();

private:
    ITransportStrategy *m_strategy;
};

#endif