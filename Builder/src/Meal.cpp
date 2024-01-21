#include <Meal.h>
#include <string>

using namespace std;

Meal::Meal()
{
    this->m_burger = "";
    this->m_fries = "";
    this->m_drink = "";
}

Meal::~Meal()
{
}

void Meal::SetBurger(string burger)
{
    this->m_burger = burger;
}

string Meal::GetBurger()
{
    return this->m_burger;
}

void Meal::SetFries(string fries)
{
    this->m_fries = fries;
}

string Meal::GetFries()
{
    return this->m_fries;
}

void Meal::SetDrink(string drink)
{
    this->m_drink = drink;
}

string Meal::GetDrink()
{
    this->m_drink;
}

string Meal::ToString()
{
    string str = this->m_burger + "," + this->m_fries + "," + this->m_drink;
    return str;
}