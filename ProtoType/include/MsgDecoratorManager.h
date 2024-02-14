/*
 * @Descripttion:MsgDecoratorManager class define
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-01-28 11:08:13
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-01-28 13:54:42
 */

#ifndef MSG_DECORATOR_MANAGER_H_
#define MSG_DECORATOR_MANAGER_H_

#include "MessageDecorator.h"
#include "Enum.h"
#include <map>

class MsgDecoratorManager
{
public:
    static MsgDecoratorManager *GetInstance();
    static void ReleaseInstance();
    void RegisterDecorator(MessageDecoratorType type, MessageDecorator *decorator);
    MessageDecorator *CreateDecorator(MessageDecoratorType type);

private:
    MsgDecoratorManager();
    ~MsgDecoratorManager();

private:
    std::map<MessageDecoratorType, MessageDecorator *> m_decorators;
    static MsgDecoratorManager *m_instance;
};

#endif