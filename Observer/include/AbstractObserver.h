
#pragma once
#ifndef ABSTRACT_OBSERVER_H
#define ABSTRACT_OBSERVER_H

#include "Common.h"

class AbstractObserver
{
public:
    virtual ~AbstractObserver() = default;

    virtual void Update(BloggerState state) = 0;
};

#endif // ABSTRACT_OBSERVER_H