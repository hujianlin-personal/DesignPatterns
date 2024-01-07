/*
 * @Descripttion:MessageDecorator class define
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-01-27 21:15:51
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-01-28 09:17:03
 */

#ifndef _MESSAGE_DECORATOR_H_
#define _MESSAGE_DECORATOR_H_

#include <string>

class MessageDecorator
{
public:
    MessageDecorator();
    virtual ~MessageDecorator();

    virtual void Use(std::string msg) = 0;
    virtual MessageDecorator *Clone() = 0;
};

#endif