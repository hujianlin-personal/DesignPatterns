#include "IChargeInterface.h"
#include "Socket.h"
#include "Adapter.h"
#include "Client.h"

using namespace std;

int main()
{
    Client client;
    Adapter adapter;
    client.Charge(&adapter);
    return 0;
}
