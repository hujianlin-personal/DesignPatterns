#include "HumanFactory.h"
#include "IHuman.h"
#include "WhiteHuman.h"
#include "YellowHuman.h"
#include <iostream>
#include <windows.h>

using namespace std;

HumanFactory *HumanFactory::m_instance = NULL;
HANDLE HumanFactory::m_mutex = CreateMutex(NULL, false, NULL);

HumanFactory::HumanFactory()
{
}

HumanFactory::~HumanFactory()
{
}

HumanFactory *HumanFactory::GetInstance()
{
    if (NULL == m_instance)
    {
        WaitForSingleObject(m_mutex, INFINITE);
        if (NULL == m_instance)
        {
            m_instance = new HumanFactory();
        }

        ReleaseMutex(m_mutex);
    }

    return m_instance;
}

void HumanFactory::ReleaseInstance()
{
    if (NULL != m_instance)
    {
        WaitForSingleObject(m_mutex, INFINITE);
        if (NULL != m_instance)
        {
            delete m_instance;
            m_instance = NULL;
        }

        ReleaseMutex(m_mutex);
    }
}

IHuman *HumanFactory::CreateHuman(HumanGenderType gender, HumanRaceType race)
{
    switch (race)
    {
    case Race_Yellow:
    {
        return new YellowHuman(gender);
    }
    case Race_White:
    {
        return new WhiteHuman(gender);
    }
    case Race_Black:
    case Race_Mixed:
    {
        cout << "non-support human race:" << race << "\n";
        return NULL;
    }
    default:
    {
        cout << "unknown human race:" << race << "\n";
        return NULL;
    }
    }
}
