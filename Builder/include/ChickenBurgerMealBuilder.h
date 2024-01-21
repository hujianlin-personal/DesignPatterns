/***************************
 *鸡肉汉堡套餐构建器
 **************************/

#ifndef _CHICKEN_BURGER_MEAL_BUILDER_H_
#define _CHICKEN_BURGER_MEAL_BUILDER_H_

#include <MealBuilder.h>

class ChickenBurgerMealBuilder : public MealBuilder
{
public:
    ChickenBurgerMealBuilder();
    virtual ~ChickenBurgerMealBuilder();

    void BuildBurger();
    void BuildFries();
    void BuildDrink();
};

#endif