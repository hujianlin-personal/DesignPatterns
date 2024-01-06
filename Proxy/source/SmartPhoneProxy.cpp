#include "SmartPhotoProxy.h"
#include <iostream>

using namespace std;

SmartPhoneProxy::SmartPhoneProxy()
{
}

SmartPhoneProxy::~SmartPhoneProxy()
{
}

void SmartPhoneProxy::Boot()
{
    cout << "boot the smartphone" << endl;
}

bool SmartPhoneProxy::Start()
{
    cout << "start the smartphone" << endl;
    return true;
}
