/*
 * @Descripttion:订单命令
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-03-17 15:11:26
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-03-17 15:38:17
 */

#ifndef _ORDER_COMMAND_H_
#define _ORDER_COMMAND_H_

#include "ICommand.h"
#include "Chef.h"
#include <string>

class OrderCommand : public ICommand
{
public:
    OrderCommand(Chef *chef);
    ~OrderCommand();

    void Order(const std::string &dish);
    void CancelOrder(const std::string &dish);

private:
    Chef *m_chef;
};

#endif