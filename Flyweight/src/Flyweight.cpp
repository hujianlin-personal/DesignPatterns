#include "Flyweight.h"

using namespace std;

Flyweight::Flyweight(const SharedState *sharedState)
{
    this->m_sharedState = new SharedState(*sharedState);
}

Flyweight::Flyweight(const Flyweight &other)
{
    this->m_sharedState = new SharedState(*other.m_sharedState);
}

Flyweight::~Flyweight()
{
    if (NULL != this->m_sharedState)
    {
        delete this->m_sharedState;
        this->m_sharedState = NULL;
    }
}

void Flyweight::Operation(const UniqueState &uniqueState) const
{
    cout << "Flyweight display shared(" << *this->m_sharedState << ") and unique(" << uniqueState << ") state\n";
}
