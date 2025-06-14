#include "Adapter.h"

using namespace std;

int main()
{
    ITarget *target = new Adapter();
    target->Request();
    return 0;
}
