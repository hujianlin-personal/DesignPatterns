/*
 * @Descripttion: 厨师
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-03-17 15:02:23
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-03-17 15:09:22
 */

#ifndef _CHEF_H_
#define _CHEF_H_

#include <string>

class Chef
{
public:
    Chef();
    ~Chef();

    void Cook(const std::string &dish);
    void CancelCooking(const std::string &dish);
};

#endif