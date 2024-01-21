/**************************
 *套餐类
 *************************/

#ifndef _MEAL_H_
#define _MEAL_H_

#include <string>

class Meal
{
public:
    Meal();
    virtual ~Meal();

    void SetBurger(std::string burger);
    std::string GetBurger();

    void SetFries(std::string fries);
    std::string GetFries();

    void SetDrink(std::string drink);
    std::string GetDrink();

    std::string ToString();

private:
    std::string m_burger; //汉堡
    std::string m_fries;  //薯条
    std::string m_drink;  //饮料
};

#endif