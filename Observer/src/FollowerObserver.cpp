#include "../include/FollowerObserver.h"
#include <iostream>

FollowerObserver::FollowerObserver(std::string &name) : m_name(name), m_state(BloggerState::NoPost)
{
}

void FollowerObserver::Update(BloggerState state)
{
    this->m_state = state;
    if (state == BloggerState::NewPost)
    {
        std::cout << this->m_name << " received new post" << std::endl;
    }
}