#include "../include/Blogger.h"

#include <iostream>
#include <algorithm>

Blogger::Blogger() : m_state(BloggerState::NoPost)
{
}

void Blogger::Attach(AbstractObserver *observer)
{
    this->m_observers.push_back(observer);
}

void Blogger::Detach(AbstractObserver *observer)
{
    this->m_observers.remove(observer);
}
void Blogger::Notify(BloggerState state)
{
    std::cout << "Blogger::Notify() - Notify all observers" << std::endl;
    for (auto &observer : m_observers)
    {
        observer->Update(state);
    }
}

void Blogger::SetState(BloggerState state)
{
    this->m_state = state;
}

void Blogger::Post()
{
    this->SetState(BloggerState::NewPost);
    this->Notify(this->m_state);
}