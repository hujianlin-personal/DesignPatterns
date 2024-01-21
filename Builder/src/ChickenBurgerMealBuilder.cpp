#include <ChickenBurgerMealBuilder.h>

using namespace std;

ChickenBurgerMealBuilder::ChickenBurgerMealBuilder()
{
}

ChickenBurgerMealBuilder::~ChickenBurgerMealBuilder()
{
}

void ChickenBurgerMealBuilder::BuildBurger()
{
    this->m_meal->SetBurger("Chicken Burder");
}

void ChickenBurgerMealBuilder::BuildFries()
{
    this->m_meal->SetFries("Large Fires");
}

void ChickenBurgerMealBuilder::BuildDrink()
{
    this->m_meal->SetDrink("Large Orange Juice");
}