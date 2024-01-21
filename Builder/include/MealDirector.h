/**********************************
 *套餐制作
 *********************************/

#ifndef _MEAL_DIRECTOR_H_
#define _MEAL_DIRECTOR_H_

#include <MealBuilder.h>

class MealDirector
{
public:
    MealDirector();
    ~MealDirector();

    void SetMealBuilder(MealBuilder *builder);
    Meal *ConstructMeal();

private:
    MealBuilder *m_builder;
};

#endif