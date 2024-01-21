#include <MealBuilder.h>

using namespace std;

MealBuilder::MealBuilder()
{
    this->m_meal = new Meal();
}

MealBuilder::~MealBuilder()
{
    if (NULL != this->m_meal)
    {
        delete this->m_meal;
        this->m_meal = NULL;
    }
}

Meal *MealBuilder::GetMeal()
{
    return this->m_meal;
}