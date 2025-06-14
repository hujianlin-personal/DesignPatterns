
#pragma once
#ifndef TARGET_H
#define TARGET_H

class ITarget
{
public:
    virtual ~ITarget() = default;
    virtual void Request() = 0;
};

#endif // TARGET_H