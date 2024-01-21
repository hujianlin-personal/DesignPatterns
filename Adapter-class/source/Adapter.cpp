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

int Adapter::Output()
{
    cout << "output 5v" << endl;
    return 5;
}

void Adapter::Charge5V()
{
    int input = this->Output();
    cout << "charge input:" << input << "V" << endl;
}