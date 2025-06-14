
#pragma once
#ifndef FOLLOWER_OBSERVER_H
#define FOLLOWER_OBSERVER_H

#include "AbstractObserver.h"
#include "Common.h"

#include <string>

class FollowerObserver : public AbstractObserver
{
public:
    // 构造函数
    FollowerObserver(std::string &name);

    // 析构函数
    ~FollowerObserver() = default;

    // 更新方法
    void Update(BloggerState state) override;

private:
    std::string m_name;   // 用户的名字
    BloggerState m_state; // 关注博主的状态
};

#endif // FOLLOWER_OBSERVER_H