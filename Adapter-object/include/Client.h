/********************************
 * 客户端
 ********************************/

#ifndef _CLIENT_H_
#define _CLIENT_H_

#include "IChargeInterface.h"

class Client
{
public:
    Client();
    ~Client();
    void Charge(IChargeInterface *adapter);
};

#endif