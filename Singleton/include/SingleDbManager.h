/*
 * @Description: 单例模式，数据库管理类
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-04-08 08:10:10
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-04-08 10:58:11
 */

#ifndef SINGLE_DB_MANAGER_H
#define SINGLE_DB_MANAGER_H

#include "SingletonTemplate.h"

// 数据库管理类
class SingleDbManager : public Singleton<SingleDbManager>
{
    friend class Singleton<SingleDbManager>; // 将模板基类声明为友元类，以便于访问私有成员
public:
    ~SingleDbManager();

private:
    SingleDbManager();
};

#endif // SINGLE_DB_MANAGER_H