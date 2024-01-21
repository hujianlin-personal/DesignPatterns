/*********************************
 * 套餐构建器接口
 ********************************/

#ifndef _MEAL_BUILDER_H_
#define _MEAL_BUILDER_H_

#include <Meal.h>

class MealBuilder
{
public:
    MealBuilder();
    virtual ~MealBuilder();

    virtual void BuildBurger() = 0;
    virtual void BuildFries() = 0;
    virtual void BuildDrink() = 0;

    Meal *GetMeal();

protected:
    Meal *m_meal;
};

#endif