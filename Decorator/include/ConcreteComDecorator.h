/*
 * @Descripttion:具体的Component装饰类声明
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-02-08 21:01:44
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-02-08 21:07:21
 */

#ifndef _CONCRETE_COM_DECORATOR_H_
#define _CONCRETE_COM_DECORATOR_H_

#include "ComponentDecorator.h"

class ConcreteComDecorator : public ComponentDecorator
{
public:
    ConcreteComDecorator(IComponent *com);
    virtual ~ConcreteComDecorator();

    void Operation();
    void AddedBehavior();
};

#endif