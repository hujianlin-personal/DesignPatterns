/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-01-26 19:58:41
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-01-26 20:14:50
 */

#include <string>
#include <iostream>

#include "AbstractMediator.h"
#include "ConcreteColleague1.h"

using namespace std;

ConcreteColleague1::ConcreteColleague1(AbstractMediator *mediator) : AbstractColleague(mediator)
{
}

ConcreteColleague1::~ConcreteColleague1()
{
}

void ConcreteColleague1::SendMsg(const string &msg)
{
    this->m_mediator->Send(msg, this);
}

void ConcreteColleague1::ReceiveMsg(const string &msg)
{
    cout << "ConcreteColleague1 reveive msg:" << msg << endl;
}