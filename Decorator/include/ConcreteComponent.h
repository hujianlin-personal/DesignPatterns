/*
 * @Descripttion:具体的Component类声明
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-02-08 20:47:18
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-02-08 20:47:26
 */
#ifndef _CONCRETE_COMPONENT_H_
#define _CONCRETE_COMPONENT_H_

#include "IComponent.h"

class ConcreteComponent : public IComponent
{
public:
    ConcreteComponent();
    virtual ~ConcreteComponent();

    void Operation();
};

#endif