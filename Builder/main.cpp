#include <MealDirector.h>
#include <ChickenBurgerMealBuilder.h>
#include <BeefBurgerMealBuilder.h>
#include <string>

int main()
{
    MealDirector *director = new MealDirector();

    //鸡肉汉堡套餐
    MealBuilder *chickenMealBuilder = new ChickenBurgerMealBuilder();
    director->SetMealBuilder(chickenMealBuilder);
    Meal *chickenMeal = director->ConstructMeal();

    //牛肉汉堡套餐
    MealBuilder *beefMealBuilder = new BeefBurgerMealBuilder();
    director->SetMealBuilder(beefMealBuilder);
    Meal *beefMeal = director->ConstructMeal();

    delete chickenMealBuilder;
    delete beefMealBuilder;
    delete director;

    return 0;
}