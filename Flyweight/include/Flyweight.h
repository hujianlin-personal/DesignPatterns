/*
 * @Descripttion:享元定义
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-02-15 15:18:57
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-02-15 20:24:34
 */
#ifndef _FLYWEIGHT_H_
#define _FLYWEIGHT_H_

#include "CommonStructs.h"

class Flyweight
{
public:
    Flyweight(const SharedState *sharedState);
    Flyweight(const Flyweight &other);
    ~Flyweight();

    void Operation(const UniqueState &uniqueState) const;

private:
    SharedState *m_sharedState;
};

#endif