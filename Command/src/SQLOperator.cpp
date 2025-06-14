#include "../include/SQLOperator.h"

#include <iostream>

SQLOperator *SQLOperator::GetInstance()
{
    static SQLOperator instance;
    return &instance;
}

void SQLOperator::Add()
{
    std::cout << "Executing Add operation in SQLOperator." << std::endl;
}

void SQLOperator::Update()
{
    std::cout << "Executing Update operation in SQLOperator." << std::endl;
}

void SQLOperator::Delete()
{
    std::cout << "Executing Delete operation in SQLOperator." << std::endl;
}

void SQLOperator::Select()
{
    std::cout << "Executing Select operation in SQLOperator." << std::endl;
}