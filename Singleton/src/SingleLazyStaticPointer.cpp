/*
 * @Description:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-04-08 08:35:03
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-04-08 09:26:06
 */

#include "../include/SingleLazyStaticPointer.h"

#include <iostream>
#include <mutex>

// 静态成员初始化
SingleLazyStaticPointer *SingleLazyStaticPointer::_instance = nullptr;

// 静态成员变量初始化
std::mutex SingleLazyStaticPointer::_mutex;

SingleLazyStaticPointer::SingleLazyStaticPointer()
{
    std::cout << "SingleLazyStaticPointer()" << std::endl;
}

SingleLazyStaticPointer::~SingleLazyStaticPointer()
{
    std::cout << "~SingleLazyStaticPointer()" << std::endl;
}

// 获取实例（DCL：double-checked locking）
// 注意：_mutex必须为静态成员，否则在多线程环境下，_mutex的初始化顺序是不确定的，可能导致死锁
// DCL存在的问题：指令重排序导致的未定义行为。
// new操作（开辟内存、调用构造函数、指针指向）是非原子的，编译器可能会对new操作进行指令重排序
// SingleLazyStaticPointer *SingleLazyStaticPointer::GetInstance()
// {
//     // 双重检查加锁
//     if (nullptr != _instance)
//     {
//         return _instance;
//     }

//     _mutex.lock();
//     if (nullptr != _instance)
//     {
//         _mutex.unlock();
//         return _instance;
//     }

//     _instance = new SingleLazyStaticPointer();
//     _mutex.unlock();
//     return _instance;
// }

// 获取单例（C++11以后使用once_flag）
SingleLazyStaticPointer *SingleLazyStaticPointer::GetInstance()
{
    // once_flag是C++11新引入的，用于保证函数只被调用一次
    static std::once_flag flag; // once_flag是局部静态变量，保证只被初始化一次。注意不要定义成类的静态成员变量！！！
    std::call_once(flag, []() -> void
                   { _instance = new SingleLazyStaticPointer(); });
    return _instance;
}