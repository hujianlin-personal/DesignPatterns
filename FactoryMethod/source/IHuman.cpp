#include "IHuman.h"

IHuman::IHuman(HumanGenderType gender, HumanRaceType race)
{
    this->m_gender = gender;
    this->m_race = race;
}

IHuman::~IHuman()
{
}

HumanGenderType IHuman::Gender()
{
    return this->m_gender;
}

HumanRaceType IHuman::Race()
{
    return this->m_race;
}
