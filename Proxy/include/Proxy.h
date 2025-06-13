/*
 * @Description: RealSubject的代理
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-06-13
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-06-13
 */

#pragma once
#ifndef PROXY_H
#define PROXY_H

#include "ISubject.h"

class Proxy : public ISubject
{
public:
    void Request() override;
};

#endif // PROXY_H