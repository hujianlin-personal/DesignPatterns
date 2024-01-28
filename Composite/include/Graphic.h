/*
 * @Descripttion:Graphic class define
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-01-28 15:34:14
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-01-28 16:39:05
 */

#ifndef _GRAPHIC_H_
#define _GRAPHIC_H_

#include <string>

class Graphic
{
public:
    Graphic(const std::string &name);
    virtual ~Graphic();

    virtual void Draw() = 0;
    virtual void AddGraphic(Graphic *child);

protected:
    std::string m_name;
};

#endif