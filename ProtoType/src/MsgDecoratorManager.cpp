#include "MsgDecoratorManager.h"

using namespace std;

MsgDecoratorManager *MsgDecoratorManager::m_instance = new MsgDecoratorManager();

MsgDecoratorManager::MsgDecoratorManager()
{
}

MsgDecoratorManager::~MsgDecoratorManager()
{
    if (!this->m_decorators.empty())
    {
        for (map<MessageDecoratorType, MessageDecorator *>::iterator iter = this->m_decorators.begin();
             iter != this->m_decorators.end(); iter++)
        {
            if (NULL != iter->second)
            {
                delete iter->second;
                iter->second++;
            }
        }

        this->m_decorators.clear();
    }
}

MsgDecoratorManager *MsgDecoratorManager::GetInstance()
{
    return MsgDecoratorManager::m_instance;
}

void MsgDecoratorManager::ReleaseInstance()
{
    if (NULL != MsgDecoratorManager::m_instance)
    {
        delete m_instance;
        m_instance = NULL;
    }
}

void MsgDecoratorManager::RegisterDecorator(MessageDecoratorType type, MessageDecorator *dcr)
{
    this->m_decorators.insert(std::pair<MessageDecoratorType, MessageDecorator *>(type, dcr));
}

MessageDecorator *MsgDecoratorManager::CreateDecorator(MessageDecoratorType type)
{
    if (NULL != this->m_decorators.find(type)->second)
    {
        return this->m_decorators.find(type)->second->Clone();
    }
    else
    {
        return NULL;
    }
}