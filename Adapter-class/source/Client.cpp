#include "Client.h"

using namespace std;

Client::Client()
{
}

Client::~Client()
{
}

void Client::Charge(IChargeInterface *adapter)
{
    adapter->Charge5V();
}
