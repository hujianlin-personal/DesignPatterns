#include "Context.h"
#include <iostream>

using namespace std;

Context::Context(IStrategy *strategy)
{
    this->m_strategy = strategy;
}

Context::~Context()
{
    if (NULL != this->m_strategy)
    {
        delete this->m_strategy;
        this->m_strategy = NULL;
    }
}

void Context::Open()
{
    if (NULL != this->m_strategy)
    {
        this->m_strategy->Operate();
    }
    else
    {
        cout << "An empty context" << endl;
    }
}