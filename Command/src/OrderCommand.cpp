/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-03-17 15:22:51
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-03-17 15:27:25
 */
#include "OrderCommand.h"

using namespace std;

OrderCommand::OrderCommand(Chef *chef)
{
    this->m_chef = chef;
}

OrderCommand::~OrderCommand()
{
}

void OrderCommand::Order(const string &dish)
{
    this->m_chef->Cook(dish);
}

void OrderCommand::CancelOrder(const string &dish)
{
    this->m_chef->CancelCooking(dish);
}