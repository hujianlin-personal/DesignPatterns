#include "./include/Car.h"
#include "./include/Bus.h"
#include "./include/TransportContext.h"
#include <iostream>

using namespace std;

int main()
{
    TransportContext *transportContext = new TransportContext();
    ITransportStrategy *carStrategy = new Car();
    ITransportStrategy *busStrategy = new Bus();

    transportContext->SetStrategy(carStrategy);
    transportContext->Transport(); // 输出: Transport by Car

    transportContext->SetStrategy(busStrategy);
    transportContext->Transport(); // 输出: Transport by Bus

    delete busStrategy;
    delete carStrategy;
    delete transportContext;

    return 0;
}