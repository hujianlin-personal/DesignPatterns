#include "CComputer.h"
#include "DesktopComputer.h"
#include "LaptopComputer.h"

using namespace std;

int main()
{
    DesktopComputer desktop;
    LaptopComputer laptop;

    desktop.Startup();
    laptop.Startup();

    return 0;
}