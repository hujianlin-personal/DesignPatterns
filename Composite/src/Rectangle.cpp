#include "Rectangle.h"
#include <string>
#include <iostream>

using namespace std;

Rectangle::Rectangle(const std::string &name)
    : Graphic(name)
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::Draw()
{
    cout << "Draw a rectangle:" << this->m_name << endl;
}
