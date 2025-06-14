#include "../include/TransportContext.h"
#include <iostream>

using namespace std;

TransportContext::TransportContext() : m_strategy(nullptr)
{
}

TransportContext::~TransportContext()
{
}

void TransportContext::SetStrategy(ITransportStrategy *strategy)
{
    this->m_strategy = strategy;
}

void TransportContext::Transport()
{
    if (m_strategy)
    {
        m_strategy->Transport();
    }
    else
    {
        cout << "No transport strategy set." << endl;
    }
}