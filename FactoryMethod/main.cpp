#include "IHuman.h"
#include "WhiteHuman.h"
#include "YellowHuman.h"
#include "HumanFactory.h"
#include <iostream>

using namespace std;

int main()
{
    HumanFactory *nuwa = HumanFactory::GetInstance();
    cout << "nuwa creates the first batch of yellow human on the first day"
         << "\n";
    for (int i = 0; i < 3; i++)
    {
        IHuman *man = nuwa->GetInstance()->CreateHuman(HumanGenderType::Gender_Male, HumanRaceType::Race_Yellow);
        man->Walk();
        man->Eat();
        delete man;
    }

    for (int i = 0; i < 3; i++)
    {
        IHuman *woman = nuwa->GetInstance()->CreateHuman(HumanGenderType::Gender_Female, HumanRaceType::Race_Yellow);
        woman->Walk();
        woman->Eat();
        delete woman;
    }

    cout << "-----------------------------------------------------------"
         << "\n";

    cout << "nuwa creates the first batch of white human on the second day"
         << "\n";
    for (int i = 0; i < 3; i++)
    {
        IHuman *man = nuwa->GetInstance()->CreateHuman(HumanGenderType::Gender_Male, HumanRaceType::Race_White);
        man->Walk();
        man->Eat();
        delete man;
    }

    for (int i = 0; i < 3; i++)
    {
        IHuman *woman = nuwa->GetInstance()->CreateHuman(HumanGenderType::Gender_Female, HumanRaceType::Race_White);
        woman->Walk();
        woman->Eat();
        delete woman;
    }

    HumanFactory::ReleaseInstance();

    return 0;
}