#include <Phone.h>
#include <stddef.h>

Phone::Phone(IBluetooth *bluetooth)
{
    this->m_bluetooth = bluetooth;
}

Phone::~Phone()
{
    if (NULL != this->m_bluetooth)
    {
        delete this->m_bluetooth;
        this->m_bluetooth = NULL;
    }
}