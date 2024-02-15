/*
 * @Descripttion:享元工厂
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-02-15 16:52:55
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-02-15 17:10:25
 */

#ifndef _FLYWEIGHT_FACTORY_H_
#define _FLYWEIGHT_FACTORY_H_

#include "Flyweight.h"
#include <unordered_map>

class FlyweightFactory
{
public:
    static FlyweightFactory *GetInstance();
    Flyweight GetFlyweight(const SharedState &state);

private:
    FlyweightFactory();
    ~FlyweightFactory();
    std::string GetKey(const SharedState &sharedState);

private:
    std::unordered_map<std::string, Flyweight> m_flyweightCache;
    static FlyweightFactory *m_instance;
};

#endif