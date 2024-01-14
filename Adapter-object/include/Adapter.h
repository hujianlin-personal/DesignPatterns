/************************************
 * 充电器
 ***********************************/

#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include "IChargeInterface.h"
#include "Socket.h"

class Adapter : public IChargeInterface
{
public:
    Adapter();
    ~Adapter();
    void Charge5V();

private:
    Socket *m_socket;
};

#endif