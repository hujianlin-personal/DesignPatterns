#include "Triangle.h"
#include <string>
#include <iostream>

using namespace std;

Triangle::Triangle(const std::string &name)
    : Graphic(name)
{
}

Triangle::~Triangle()
{
}

void Triangle::Draw()
{
    cout << "Draw a triangle:" << this->m_name << endl;
}