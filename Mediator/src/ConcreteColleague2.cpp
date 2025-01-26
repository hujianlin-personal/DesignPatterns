/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-01-26 19:58:41
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-01-26 20:51:40
 */

#include <string>
#include <iostream>

#include "AbstractMediator.h"
#include "ConcreteColleague2.h"

using namespace std;

ConcreteColleague2::ConcreteColleague2(AbstractMediator *mediator) : AbstractColleague(mediator)
{
}

ConcreteColleague2::~ConcreteColleague2()
{
}

void ConcreteColleague2::SendMsg(const string &msg)
{
    this->m_mediator->Send(msg, this);
}

void ConcreteColleague2::ReceiveMsg(const string &msg)
{
    cout << "ConcreteColleague2 reveive msg:" << msg << endl;
}