/*
 * @Descripttion:entry of executable program
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-01-28 16:10:13
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-01-28 16:40:36
 */
#include "Graphic.h"
#include "Picture.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Triangle tri1("tri1"), tri2("tri2");
    Rectangle rec1("rec1"), rec2("rec2"), rec3("rec3");
    Picture pic("pic1");
    pic.AddGraphic(&tri1);
    pic.AddGraphic(&rec1);
    pic.AddGraphic(&rec2);
    pic.AddGraphic(&tri2);
    pic.AddGraphic(&rec3);

    pic.Draw();

    return 0;
}