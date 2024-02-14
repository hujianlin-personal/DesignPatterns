#include "ComponentDecorator.h"

ComponentDecorator::ComponentDecorator(IComponent *com)
{
    this->m_com = com;
}

ComponentDecorator::~ComponentDecorator()
{
}

void ComponentDecorator::Operation()
{
    this->m_com->Operation();
}