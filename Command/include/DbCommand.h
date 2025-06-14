/*
 * @Descripttion:Command接口类
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-03-17 14:57:22
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-03-17 15:22:01
 */

#ifndef _ICOMMAND_H_
#define _ICOMMAND_H_

#include <string>

class ICommand
{
public:
    ICommand();
    virtual ~ICommand();

    //下订单
    virtual void Order(const std::string &dish);
    //取消订单
    virtual void CancelOrder(const std::string &dish);
};

#endif
