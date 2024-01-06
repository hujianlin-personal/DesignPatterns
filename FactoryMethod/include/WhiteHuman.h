/********************************
 * 白种人
 *******************************/

#include "IHuman.h"

#ifndef _WHITE_HUMAN_H_
#define _WHITE_HUMAN_H_

class WhiteHuman : public IHuman
{
public:
    WhiteHuman(HumanGenderType gender);
    virtual ~WhiteHuman();

public:
    virtual void Walk();
    virtual void Eat();
};

#endif