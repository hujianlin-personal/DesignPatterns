/************************************
 * 充电器
 ***********************************/

#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include "IChargeInterface.h"
#include "Socket.h"

class Adapter : public IChargeInterface, public Socket
{
public:
    Adapter();
    ~Adapter();
    void Charge5V();
    int Output();
};

#endif