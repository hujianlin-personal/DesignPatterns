/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-01-28 15:58:17
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-01-28 22:00:48
 */
#include "Picture.h"
#include <iostream>

using namespace std;

Picture::Picture(const std::string &name)
    : Graphic(name)
{
}

Picture::~Picture()
{
}

void Picture::Draw()
{
    for (list<Graphic *>::iterator iter = this->m_children.begin();
         iter != m_children.end(); iter++)
    {
        (*iter)->Draw();
    }

    cout << "Draw a picture:" << this->m_name << " finished" << endl;
}

void Picture::AddGraphic(Graphic *child)
{
    this->m_children.push_back(child);
}