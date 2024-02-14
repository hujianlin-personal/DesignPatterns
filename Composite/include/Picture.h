/*
 * @Descripttion:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-01-28 15:54:25
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-01-28 16:39:26
 */

#ifndef _PICTURE_H_
#define _PICTURE_H_

#include "Graphic.h"
#include <list>

class Picture : public Graphic
{
public:
    Picture(const std::string &name);
    virtual ~Picture();

    virtual void Draw();
    virtual void AddGraphic(Graphic *child);

private:
    std::list<Graphic *> m_children;
};

#endif