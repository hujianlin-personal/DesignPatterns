/*******************************************
 * Human抽象接口类
 *******************************************/

#include "CommonDefine.h"

#ifndef _IHUMAN_H_
#define _IHUMAN_H_

class IHuman
{
public:
    IHuman(HumanGenderType gender, HumanRaceType race);
    virtual ~IHuman();

public:
    HumanGenderType Gender();
    HumanRaceType Race();
    virtual void Walk() = 0;
    virtual void Eat() = 0;

private:
    HumanGenderType m_gender;
    HumanRaceType m_race;
};

#endif