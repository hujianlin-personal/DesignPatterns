#include "Waiter.h"
#include <iostream>

using namespace std;

Waiter::Waiter()
{
}

Waiter::~Waiter()
{
}

void Waiter::SetCommand(ICommand *cmd)
{
    this->m_cmd = cmd;
}

void Waiter::TakeOrder(string &dish)
{
    cout << "The Cilent takes order " << dish << "\n";
    this->m_cmd->Order(dish);
}

void Waiter::CancelOrder(string &dish)
{
    cout << "The Client cancels order " << dish << "\n";
    this->m_cmd->CancelOrder(dish);
}