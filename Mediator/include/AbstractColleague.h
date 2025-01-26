/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-01-26 19:50:49
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-01-26 19:59:36
 */

#ifndef _ABSTRACT_COLLEAGUE_H_
#define _ABSTRACT_COLLEAGUE_H_

#include <string>

class AbstractMediator;

class AbstractColleague
{
protected:
    AbstractMediator *m_mediator;

public:
    AbstractColleague(AbstractMediator *mediator) : m_mediator(mediator)
    {
    }

    virtual void SendMsg(const std::string &msg) = 0;
    virtual void ReceiveMsg(const std::string &msg) = 0;
};

#endif