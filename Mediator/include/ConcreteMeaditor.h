/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-01-26 20:17:57
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-01-26 20:56:30
 */

#ifndef _CONCRETE_MEDIATOR_H_
#define _CONCRETE_MEDIATOR_H_

#include "AbstractMediator.h"
#include "AbstractColleague.h"
#include "CommonType.h"

class ConcreteMeaditor : public AbstractMediator
{
private:
    AbstractColleague *m_colleague1;
    AbstractColleague *m_colleague2;

public:
    ConcreteMeaditor();
    ~ConcreteMeaditor();

    void SetColleague(AbstractColleague *colleague, ColleagueType type);
    void Send(const std::string &msg, AbstractColleague *colleague) override;
};

#endif