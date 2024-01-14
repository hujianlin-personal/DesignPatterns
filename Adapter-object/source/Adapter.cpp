#include "Adapter.h"
#include <string>
#include <iostream>

using namespace std;

Adapter::Adapter()
{
    this->m_socket = new Socket();
}

Adapter::~Adapter()
{
    if (NULL != this->m_socket)
    {
        delete this->m_socket;
        this->m_socket = NULL;
    }
}

void Adapter::Charge5V()
{
    int outOfSocket = this->m_socket->Output();
    int input = outOfSocket / 44;
    cout << "charge input:" << input << "V" << endl;
}