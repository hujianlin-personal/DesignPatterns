/*
 * @Description: 单例模式，懒汉式静态智能指针
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-04-08 08:10:10
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-04-08 09:47:18
 */

#ifndef SINGLE_LAZY_STATIC_SMART_POINTER_H
#define SINGLE_LAZY_STATIC_SMART_POINTER_H

#include <memory>

class SingleLazyStaticSmartPointerDeletor; // 前置声明，单例删除助手类，用于智能指针的自动释放

// 单例模式，懒汉式静态智能指针
class SingleLazyStaticSmartPointer
{
public:
    // 将deletor作为友元类，以便于智能指针可以访问到析构函数
    friend class SingleLazyStaticSmartPointerDeletor;

    // 获取单例
    static std::shared_ptr<SingleLazyStaticSmartPointer> GetInstance();

private:
    // 构造函数
    SingleLazyStaticSmartPointer();

    // 析构函数
    ~SingleLazyStaticSmartPointer();

    // 禁止拷贝构造
    SingleLazyStaticSmartPointer(const SingleLazyStaticSmartPointer &) = delete;

    // 禁止拷贝赋值
    SingleLazyStaticSmartPointer &operator=(const SingleLazyStaticSmartPointer &) = delete;

private:
    static std::shared_ptr<SingleLazyStaticSmartPointer> _instance; // 单例对象
};

// 单例删除助手类
class SingleLazyStaticSmartPointerDeletor
{
public:
    // 重载()运算符，实现仿函数功能
    void operator()(SingleLazyStaticSmartPointer *p);
};

#endif // SINGLE_LAZY_STATIC_SMART_POINTER_H