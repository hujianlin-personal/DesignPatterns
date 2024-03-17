/*
 * @Descripttion:服务员
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-03-17 15:32:04
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-03-17 15:39:55
 */

#ifndef _WAITER_H_
#define _WAITER_H_

#include "ICommand.h"
#include <string>

class Waiter
{
public:
    Waiter();
    ~Waiter();

    void TakeOrder(std::string &dish);
    void CancelOrder(std::string &dish);
    void SetCommand(ICommand *cmd);

private:
    ICommand *m_cmd;
};

#endif
