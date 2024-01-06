/********************************************
 * Human工厂类
 *******************************************/

#include <windows.h>
#include <winnt.h>
#include "IHuman.h"

#ifndef _HUMAN_FACTORY_H_
#define _HUMAN_FACTORY_H_

using namespace std;

class HumanFactory
{
public:
    static HumanFactory *GetInstance();
    static void ReleaseInstance();
    IHuman *CreateHuman(HumanGenderType gender, HumanRaceType race);

private:
    HumanFactory();
    ~HumanFactory();

private:
    static HumanFactory *m_instance;
    static HANDLE m_mutex;
};

#endif