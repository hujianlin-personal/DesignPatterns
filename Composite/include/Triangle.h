/*
 * @Descripttion:Triangle define
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-01-28 15:41:02
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-01-28 16:14:43
 */
#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include "Graphic.h"

class Triangle : public Graphic
{
public:
    Triangle(const std::string &name);
    virtual ~Triangle();

    void Draw();
};

#endif