/*
 * @Descripttion:MessageBox class define
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-01-28 10:23:04
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-01-28 13:54:20
 */

#ifndef _MESSAGE_BOX_H_
#define _MESSAGE_BOX_H_

#include "MessageDecorator.h"
#include <stdio.h>

class MessageBox : public MessageDecorator
{
public:
    MessageBox(char dcrChar);
    MessageBox(const MessageBox &src);
    ~MessageBox();

    void Use(std::string msg);
    MessageDecorator *Clone();

protected:
    char m_dcrChar;
};

#endif
