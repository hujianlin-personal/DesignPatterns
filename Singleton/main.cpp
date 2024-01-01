#include "Emperor.h"

int main(int argc, char *argv[])
{
    Emperor *pEmperor1 = Emperor::GetInstance();
    pEmperor1->SetTitle("雍正");
    pEmperor1->DisplayEmperorInfo();

    Emperor *pEmperor2 = Emperor::GetInstance();
    pEmperor2->DisplayEmperorInfo();

    Emperor *pEmperor3 = Emperor::GetInstance();
    pEmperor3->DisplayEmperorInfo();

    Emperor::ReleaseInstance();
    return 0;
}