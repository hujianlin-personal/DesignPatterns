/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-01-26 19:45:51
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-02-28 22:52:32
 */

#ifndef _ABSTRACT_MEDIATOR_H_
#define _ABSTRACT_MEDIATOR_H_

#include <string>

#include "AbstractColleague.h"

/**
 * @class AbstractMediator
 * @brief 抽象中介者类，定义了与各个同事对象之间的交互接口。
 *
 * 中介者模式通过引入一个中介者对象来减少对象之间的直接交互，从而降低耦合度。
 * 具体的中介者类将实现该接口，并负责协调各个同事对象的行为。
 */
class AbstractMediator
{
public:
    virtual void Send(const std::string &msg, AbstractColleague *colleague) = 0;
};

#endif