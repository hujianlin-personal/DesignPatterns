/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-01-27 23:08:42
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-01-28 13:57:34
 */
#include "UnderLinePen.h"
#include <iostream>

using namespace std;

UnderLinePen::UnderLinePen(char uchar)
{
    this->m_uchar = uchar;
}

UnderLinePen::UnderLinePen(const UnderLinePen &src)
{
    this->m_uchar = src.m_uchar;
}

UnderLinePen::~UnderLinePen()
{
}

void UnderLinePen::Use(string msg)
{
    cout << "\"" << msg << "\"" << endl;
    for (int i = 0; i < (int)msg.length() + 2; i++)
    {
        cout << this->m_uchar;
    }

    cout << endl;
}

MessageDecorator *UnderLinePen::Clone()
{
    return new UnderLinePen(*this);
}