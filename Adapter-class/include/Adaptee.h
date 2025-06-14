
#pragma once
#ifndef ADAPTEE_H
#define ADAPTEE_H

class Adaptee
{
public:
    virtual ~Adaptee() = default;

    virtual void SpecificRequest();
};

#endif // ADAPTEE_H