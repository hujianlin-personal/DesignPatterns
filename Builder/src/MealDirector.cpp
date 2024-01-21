#include <MealDirector.h>
#include <iostream>

using namespace std;

MealDirector::MealDirector()
{
}

MealDirector::~MealDirector()
{
}

void MealDirector::SetMealBuilder(MealBuilder *builder)
{
    this->m_builder = builder;
}

Meal *MealDirector::ConstructMeal()
{
    this->m_builder->BuildBurger();
    this->m_builder->BuildFries();
    this->m_builder->BuildDrink();

    Meal *meal = this->m_builder->GetMeal();
    cout << "Construct Meal:" << meal->ToString() << endl;

    return meal;
}