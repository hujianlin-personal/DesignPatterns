/*
 * @Descripttion:Rectangle define
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-01-28 15:49:24
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-01-28 16:14:46
 */
#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "Graphic.h"

class Rectangle : public Graphic
{
public:
    Rectangle(const std::string &name);
    virtual ~Rectangle();

    void Draw();
};

#endif