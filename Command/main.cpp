#include "Chef.h"
#include "Waiter.h"
#include "OrderCommand.h"
#include <string>

using namespace std;

int main()
{
    Chef *chef = new Chef();
    Waiter *waiter = new Waiter();
    ICommand *order = new OrderCommand(chef);

    waiter->SetCommand(order);
    string dish = "FriedPotatoes";
    waiter->TakeOrder(dish);
    dish = "Sandwich";
    waiter->TakeOrder(dish);

    waiter->CancelOrder(dish);

    if (NULL != chef)
    {
        delete chef;
        chef = NULL;
    }

    if (NULL != waiter)
    {
        delete waiter;
        waiter = NULL;
    }

    if (NULL != order)
    {
        delete order;
        order = NULL;
    }
}