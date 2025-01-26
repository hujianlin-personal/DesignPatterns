/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-01-26 15:28:34
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-01-26 20:52:33
 */

#include <string>

#include "ConcreteColleague1.h"
#include "ConcreteColleague2.h"
#include "ConcreteMeaditor.h"

using namespace std;

int main()
{
    ConcreteMeaditor *med = new ConcreteMeaditor(); //中介者

    ConcreteColleague1 *coll_1 = new ConcreteColleague1(med); //同事1
    ConcreteColleague2 *coll_2 = new ConcreteColleague2(med); //同事2

    //注册
    med->SetColleague(coll_1, ColleagueType_Concrete1);
    med->SetColleague(coll_2, ColleagueType_Concrete2);

    //互发消息
    coll_1->SendMsg("Hello from Colleague1");
    coll_2->SendMsg("Hi, this is Colleague2");

    if (NULL != med)
    {
        delete med;
        med = NULL;
    }

    if (NULL != coll_1)
    {
        delete coll_1;
        coll_1 = NULL;
    }

    if (NULL != coll_2)
    {
        delete coll_2;
        coll_2 = NULL;
    }

    return 0;
}
