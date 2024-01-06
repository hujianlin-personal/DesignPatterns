/**************************************
 * GivenGreenLight策略
 **************************************/

#include "IStrategy.h"

#ifndef _GIVENGREENLIGHT_H_
#define _GIVENGREENLIGHT_H_

class GivenGreenLight : public IStrategy
{
public:
    GivenGreenLight();
    ~GivenGreenLight();
    void Operate();
};

#endif