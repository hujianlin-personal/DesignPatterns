/*
 * @Descripttion:UnderLinePen class define
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-01-27 22:45:01
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-01-28 13:54:55
 */

#ifndef _UNDERLINE_PEN_H_
#define _UNDERLINE_PEN_H_

#include "MessageDecorator.h"
#include <stdio.h>

class UnderLinePen : public MessageDecorator
{
public:
    UnderLinePen(char uchar);
    UnderLinePen(const UnderLinePen &src);
    virtual ~UnderLinePen();

    void Use(std::string msg);
    MessageDecorator *Clone();

protected:
    char m_uchar;
};

#endif