/**************************************
 * BackDoor策略
 **************************************/

#include "IStrategy.h"

#ifndef _BACKDOOR_H_
#define _BACKDOOR_H_

class BackDoor : public IStrategy
{
public:
    BackDoor();
    ~BackDoor();
    void Operate();
};

#endif