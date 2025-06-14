#pragma once
#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include "Target.h"
#include "Adaptee.h"

class Adapter : public ITarget
{
public:
    Adapter();
    ~Adapter();
    void Request() override;

private:
    Adaptee m_adaptee;
};

#endif