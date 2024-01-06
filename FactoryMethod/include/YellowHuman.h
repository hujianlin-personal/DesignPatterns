/********************************
 * 黄种人
 *******************************/

#include "IHuman.h"

#ifndef _YELLOW_HUAMN_H_
#define _YELLOW_HUAMN_H_

class YellowHuman : public IHuman
{
public:
    YellowHuman(HumanGenderType gender);
    virtual ~YellowHuman();

public:
    virtual void Walk();
    virtual void Eat();
};

#endif