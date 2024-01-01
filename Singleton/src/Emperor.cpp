#include "Emperor.h"
#include <iostream>

using namespace std;

Emperor *Emperor::m_instance = NULL;

HANDLE Emperor::m_mutex = CreateMutex(NULL, false, NULL);

Emperor::Emperor()
{
    cout << "create emperor instance."
         << "\n";
}

Emperor::~Emperor()
{
    cout << "destroy emperor instance and release its resources."
         << "\n";
}

Emperor *Emperor::GetInstance()
{
    if (NULL == m_instance)
    {
        WaitForSingleObject(m_mutex, INFINITE);
        if (NULL == m_instance)
        {
            m_instance = new Emperor();
        }

        ReleaseMutex(m_mutex);
    }

    return m_instance;
}

void Emperor::ReleaseInstance()
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

void Emperor::SetTitle(const string &title)
{
    this->m_title = title;
}

void Emperor::DisplayEmperorInfo()
{
    cout << "the emperor's regin title is " << this->m_title << "\n";
}