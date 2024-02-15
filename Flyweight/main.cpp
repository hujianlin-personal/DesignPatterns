#include "CommonStructs.h"
#include "Flyweight.h"
#include "FlyweightFactory.h"
#include <string>
#include <iostream>

using namespace std;

void RegisterCarToDataBase(const string &plates, const string &owner, const string &brand, const string &model, const string &color)
{
    cout << "RegisterCarToDataBase\n";
    SharedState ss(brand, model, color);
    UniqueState us(owner, plates);
    Flyweight ff = FlyweightFactory::GetInstance()->GetFlyweight(ss);
    ff.Operation(us);
}

int main()
{
    RegisterCarToDataBase("BA00001", "Xi", "HongQi", "X1", "Black");
    RegisterCarToDataBase("HU09271", "Jiang", "Benz", "CLA200", "Gray");
    RegisterCarToDataBase("KY37182", "Hu", "HongQi", "X1", "Black");
    return 0;
}