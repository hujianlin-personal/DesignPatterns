#include "Chef.h"
#include <iostream>

using namespace std;

Chef::Chef()
{
}

Chef::~Chef()
{
}

void Chef::Cook(const string &dish)
{
    cout << "The chef is cooking " << dish << "\n";
}

void Chef::CancelCooking(const string &dish)
{
    cout << "The chef stops cooking " << dish << "\n";
}