/*
 * @Descripttion: component装饰器定义
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-02-08 20:53:23
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-02-08 21:05:30
 */

#ifndef _COMPONENT_DECORATOR_H_
#define _COMPONENT_DECORATOR_H_

#include "IComponent.h"

class ComponentDecorator : public IComponent
{
public:
    ComponentDecorator(IComponent *com);
    virtual ~ComponentDecorator();

    virtual void Operation();

protected:
    IComponent *m_com;
};

#endif
