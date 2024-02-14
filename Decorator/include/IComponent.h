/*
 * @Descripttion:Component接口类
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-02-08 20:42:32
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-02-08 20:44:08
 */

#ifndef _ICOMPONENT_H_
#define _ICOMPONENT_H_

class IComponent
{
public:
    IComponent();
    virtual ~IComponent();

    virtual void Operation() = 0;
};

#endif
