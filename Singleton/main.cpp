#include "Emperor.h"
#include <iostream>

using namespace std;

int main()
{
    Emperor *pEmperor1 = Emperor::GetInstance();
    pEmperor1->SetTitle("yongzheng");
    pEmperor1->DisplayEmperorInfo();

    Emperor *pEmperor2 = Emperor::GetInstance();
    pEmperor2->DisplayEmperorInfo();

    Emperor *pEmperor3 = Emperor::GetInstance();
    pEmperor3->DisplayEmperorInfo();

    Emperor::ReleaseInstance();
    return 0;
}