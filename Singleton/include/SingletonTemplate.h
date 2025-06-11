/*
 * @Description:单例模板
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-04-08 10:37:15
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-06-11 18:44:48
 */

#ifndef SINGLETON_TEMPLATE_H
#define SINGLETON_TEMPLATE_H

#include <iostream>
#include <memory>
#include <mutex>

// CRTP(Curiously Recurring Template Pattern，奇异递归模板模式)是一种将派生类作为模板参数传递给基类的技术，即一个类继承自一个以自身为模板参数的基类。
// 这种模式常用于实现静态多态、接口的默认实现、编译时策略选择等

template <typename T>
class Singleton
{
protected:
    // 构造函数
    Singleton()
    {
        std::cout << "Singleton::Singleton()" << std::endl;
    }

    // 禁用拷贝构造
    Singleton(const Singleton &) = delete;

    // 禁用拷贝赋值
    Singleton &operator=(const Singleton &) = delete;

    static std::shared_ptr<T> _instance; // 单例对象

public:
    // 析构函数
    virtual ~Singleton()
    {
        std::cout << "Singleton::~Singleton()" << std::endl;
    }

    // 获取单例
    static std::shared_ptr<T> GetInstance()
    {
        static std::once_flag flag;
        std::call_once(flag, []()
                       { _instance = std::shared_ptr<T>(new T()); }); // 注意：这里不用使用std::make_shared<T>()，因为T的构造函数一般是私有的，无法直接使用make_shared创建对象。
        return _instance;
    }
};

template <typename T>
std::shared_ptr<T> Singleton<T>::_instance = nullptr; // 静态成员变量初始化

#endif