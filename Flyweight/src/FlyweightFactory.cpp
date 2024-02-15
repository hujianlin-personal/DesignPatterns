#include "FlyweightFactory.h"
#include <iostream>

using namespace std;

FlyweightFactory *FlyweightFactory::m_instance = new FlyweightFactory();

FlyweightFactory::FlyweightFactory()
{
}

FlyweightFactory::~FlyweightFactory()
{
}

string FlyweightFactory::GetKey(const SharedState &state)
{
    return state.brand + "_" + state.model + "_" + state.color;
}

FlyweightFactory *FlyweightFactory::GetInstance()
{
    return m_instance;
}

Flyweight FlyweightFactory::GetFlyweight(const SharedState &state)
{
    string key = this->GetKey(state);
    if (this->m_flyweightCache.find(key) == this->m_flyweightCache.end())
    {
        cout << "FlyweightFactory.GetFlyweight: Can't find a flyweight, creating new one.\n";
        this->m_flyweightCache.insert(pair<string, Flyweight>(key, Flyweight(&state)));
    }
    else
    {
        cout << "FlyweightFactory.GetFlyweight: Reusing existing flyweight.\n";
    }

    return this->m_flyweightCache.at(key);
}