#include "ComputerProxy.h"
#include <stddef.h>

using namespace std;

ComputerProxy::ComputerProxy(IMachineProxy *machine)
{
    this->m_machine = machine;
}

ComputerProxy::~ComputerProxy()
{
    if (NULL != this->m_machine)
    {
        delete this->m_machine;
        this->m_machine = NULL;
    }
}

void ComputerProxy::Boot()
{
    this->m_machine->Boot();
}

bool ComputerProxy::Start()
{
    return this->m_machine->Start();
}