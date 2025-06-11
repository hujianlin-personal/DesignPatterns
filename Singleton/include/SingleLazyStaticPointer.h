/*
 * @Description: 单例模式，懒汉式静态指针
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-04-08 08:10:10
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-04-07 22:13:37
 */

#ifndef SINGLE_LAZY_STATIC_POINTER_H
#define SINGLE_LAZY_STATIC_POINTER_H

#include <mutex>

// 单例模式，懒汉式静态指针
class SingleLazyStaticPointer
{
public:
    // 析构函数
    ~SingleLazyStaticPointer();

    // 获取实例
    static SingleLazyStaticPointer *GetInstance();

private:
    // 构造函数
    SingleLazyStaticPointer();

    // 禁止拷贝构造
    SingleLazyStaticPointer(const SingleLazyStaticPointer &) = delete;

    // 禁止赋值拷贝
    SingleLazyStaticPointer &operator=(const SingleLazyStaticPointer &) = delete;

private:
    static SingleLazyStaticPointer *_instance; // 单例对象
    static std::mutex _mutex;                  // 互斥锁
};

#endif // SINGLE_LAZY_STATIC_POINTER_H