#include "ConcreteComDecorator.h"
#include <string>
#include <iostream>

using namespace std;

ConcreteComDecorator::ConcreteComDecorator(IComponent *com) : ComponentDecorator(com)
{
}

ConcreteComDecorator::~ConcreteComDecorator()
{
}

void ConcreteComDecorator::Operation()
{
    AddedBehavior();
    ComponentDecorator::Operation();
}

void ConcreteComDecorator::AddedBehavior()
{
    cout << "do AddedBehavior" << endl;
}