#include "Socket.h"
#include <string>
#include <iostream>

using namespace std;

Socket::Socket()
{
}

Socket::~Socket()
{
}

int Socket::Output()
{
    cout << "output 220v" << endl;
    return 220;
}
