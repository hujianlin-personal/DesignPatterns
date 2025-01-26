/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-01-26 20:00:33
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-01-26 20:07:12
 */

#ifndef _CONCRETE_COLLEAGUE2_H_
#define _CONCRETE_COLLEAGUE2_H_

#include <string>

#include "AbstractColleague.h"
#include "AbstractMediator.h"

class ConcreteColleague2 : public AbstractColleague
{
public:
    ConcreteColleague2(AbstractMediator *mediator);
    ~ConcreteColleague2();

    void SendMsg(const std::string &msg) override;
    void ReceiveMsg(const std::string &msg) override;
};

#endif