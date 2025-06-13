
#include "../include/Proxy.h"
#include "../include/RealSubject.h"

#include <iostream>

void Proxy::Request()
{
    std::cout << "Proxy::Request() called" << std::endl;
    RealSubject realSubject;
    realSubject.Request(); // Delegating the request to RealSubject
}