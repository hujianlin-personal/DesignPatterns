#include "ConcreteComponent.h"
#include <string>
#include <iostream>

using namespace std;

ConcreteComponent::ConcreteComponent()
{
}

ConcreteComponent::~ConcreteComponent()
{
}

void ConcreteComponent::Operation()
{
    cout << "concrete component operation" << endl;
}