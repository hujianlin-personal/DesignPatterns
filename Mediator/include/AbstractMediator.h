/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-01-26 19:45:51
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-01-26 19:54:09
 */

#ifndef _ABSTRACT_MEDIATOR_H_
#define _ABSTRACT_MEDIATOR_H_

#include <string>

#include "AbstractColleague.h"

class AbstractMediator
{
public:
    virtual void Send(const std::string &msg, AbstractColleague *colleague) = 0;
};

#endif