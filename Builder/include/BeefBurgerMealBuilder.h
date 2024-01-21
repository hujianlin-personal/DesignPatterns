/***********************************
 *牛肉汉堡套餐构建器
 **********************************/

#ifndef _BEEF_BURGER_MEAL_BUILDER_H_
#define _BEEF_BURGER_MEAL_BUILDER_H_

#include <MealBuilder.h>

class BeefBurgerMealBuilder : public MealBuilder
{
public:
    BeefBurgerMealBuilder();
    virtual ~BeefBurgerMealBuilder();

    void BuildBurger();
    void BuildFries();
    void BuildDrink();
};

#endif