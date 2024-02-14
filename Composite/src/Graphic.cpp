#include "Graphic.h"
#include <iostream>

using namespace std;

Graphic::Graphic(const std::string &name)
{
    this->m_name = name;
}

Graphic::~Graphic()
{
}

void Graphic::AddGraphic(Graphic *child)
{
}
