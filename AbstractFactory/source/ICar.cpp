#include "ICar.h"

ICar::ICar(std::string brand)
{
    this->m_brand = brand;
}

ICar::~ICar()
{
}

std::string ICar::Brand()
{
    return this->m_brand;
}