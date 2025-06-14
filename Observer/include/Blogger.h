
#pragma once
#ifndef BLOGGER_H
#define BLOGGER_H

#include "AbstractObserver.h"
#include "Common.h"

#include <list>

class Blogger
{
public:
    // 构造函数
    Blogger();
    // 析构函数
    ~Blogger() = default;
    //  添加观察者
    void Attach(AbstractObserver *observer);
    // 从观察者列表中移除观察者
    void Detach(AbstractObserver *observer);
    // 通知所有观察者
    void Notify(BloggerState state);
    // 设置状态
    void SetState(BloggerState state);
    // 发布新帖子
    void Post();

private:
    std::list<AbstractObserver *> m_observers; // 观察者列表
    BloggerState m_state;                      // 博主的状态
};

#endif // BLOGGER_H