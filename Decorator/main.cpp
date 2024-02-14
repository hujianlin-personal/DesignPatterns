/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-02-13 08:50:50
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-02-13 23:36:06
 */
#include "IComponent.h"
#include "ConcreteComponent.h"
#include "ComponentDecorator.h"
#include "ConcreteComDecorator.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    IComponent *com = new ConcreteComponent();
    ComponentDecorator *d = new ConcreteComDecorator(com);
    d->Operation();
    if (NULL != com)
    {
        delete com;
        com = NULL;
    }

    if (NULL != d)
    {
        delete d;
        d = NULL;
    }

    return 0;
}