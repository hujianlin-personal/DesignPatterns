#include "IAbstractCarFactory.h"
#include <string>

using namespace std;

IAbstractCarFactory::IAbstractCarFactory(string owner)
{
    this->m_owner = owner;
}

IAbstractCarFactory::~IAbstractCarFactory()
{
}
