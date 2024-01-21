#include <BeefBurgerMealBuilder.h>

using namespace std;

BeefBurgerMealBuilder::BeefBurgerMealBuilder()
{
}

BeefBurgerMealBuilder::~BeefBurgerMealBuilder()
{
}

void BeefBurgerMealBuilder::BuildBurger()
{
    this->m_meal->SetBurger("Beef Burder");
}

void BeefBurgerMealBuilder::BuildFries()
{
    this->m_meal->SetFries("Middle Fires");
}

void BeefBurgerMealBuilder::BuildDrink()
{
    this->m_meal->SetDrink("Middle Cola");
}