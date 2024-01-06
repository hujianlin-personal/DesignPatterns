/**************************************
 * 锦囊包，用于包装策略
 **************************************/

#include "IStrategy.h"

#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class Context
{
public:
    Context(IStrategy *strategy);
    ~Context();
    void Open();

private:
    IStrategy *m_strategy;
};

#endif