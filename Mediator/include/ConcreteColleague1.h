/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-01-26 20:00:33
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-01-26 20:07:31
 */

#ifndef _CONCRETE_COLLEAGUE1_H_
#define _CONCRETE_COLLEAGUE1_H_

#include <string>

#include "AbstractColleague.h"
#include "AbstractMediator.h"

class ConcreteColleague1 : public AbstractColleague
{
public:
    ConcreteColleague1(AbstractMediator *mediator);
    ~ConcreteColleague1();

    void SendMsg(const std::string &msg) override;
    void ReceiveMsg(const std::string &msg) override;
};

#endif