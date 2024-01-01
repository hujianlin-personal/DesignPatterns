#include "BackDoor.h"
#include "GivenGreenLight.h"
#include "Context.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Here is the first appointment place" << endl;
    Context *ptrContext1 = new Context(new BackDoor());
    ptrContext1->Open();

    cout << "Here is the second appointment place" << endl;
    Context *ptrContext2 = new Context(new GivenGreenLight());
    ptrContext2->Open();

    delete ptrContext1;
    ptrContext1 = NULL;

    delete ptrContext2;
    ptrContext2 = NULL;

    return 0;
}