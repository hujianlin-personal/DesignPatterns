#include "Adapter.h"
#include <string>
#include <iostream>

using namespace std;

Adapter::Adapter()
{
}

Adapter::~Adapter()
{
}

void Adapter::Request()
{
    std::cout << "Adapter: Request called." << std::endl;
    Adaptee::SpecificRequest(); // Call the Adaptee's method
}