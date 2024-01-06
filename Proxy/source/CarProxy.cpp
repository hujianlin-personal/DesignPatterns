#include "CarProxy.h"
#include <iostream>

using namespace std;

CarProxy::CarProxy()
{
}

CarProxy::~CarProxy()
{
}

void CarProxy::Boot()
{
    cout << "boot the car" << endl;
}

bool CarProxy::Start()
{
    cout << "start the car" << endl;
    return true;
}
