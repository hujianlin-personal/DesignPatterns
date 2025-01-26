/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-01-26 20:29:11
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-01-26 21:15:20
 */

#include <string>

#include "AbstractColleague.h"
#include "ConcreteMeaditor.h"

using namespace std;

ConcreteMeaditor::ConcreteMeaditor()
{
}

ConcreteMeaditor::~ConcreteMeaditor()
{
}

void ConcreteMeaditor::SetColleague(AbstractColleague *colleague, ColleagueType type)
{
    if (ColleagueType_Concrete1 == type)
    {
        this->m_colleague1 = colleague;
    }
    else
    {
        this->m_colleague2 = colleague;
    }
}

void ConcreteMeaditor::Send(const string &msg, AbstractColleague *colleague)
{
    if (this->m_colleague1 == colleague)
    {
        this->m_colleague2->ReceiveMsg(msg);
    }
    else
    {
        this->m_colleague1->ReceiveMsg(msg);
    }
}