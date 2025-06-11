/*
 * @Description: 以局部静态变量的懒汉模式实现单例模式
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-04-07 21:17:22
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-04-07 21:30:22
 */

#ifndef SINGLE_LAZY_STATIC_VAR_H
#define SINGLE_LAZY_STATIC_VAR_H

// 单例模式,用局部静态变量的懒汉模式实现
// 原理就是函数的局部静态变量生命周期随着进程结束而结束
// 在C++98年代，上述单例模式存在隐患，对于多线程方式生成的实例可能时多个。
// 随着C++ 11的来临，这种方式不再存在线程安全问题。编译器会自动插入同步代码（如互斥锁或原子操作）
class SingleLazyStaticVar
{
public:
    // 单例获取接口
    static SingleLazyStaticVar &GetInstance();

private:
    // 构造函数私有化，避免外部创建对象
    SingleLazyStaticVar();

    // 禁止拷贝构造
    SingleLazyStaticVar(const SingleLazyStaticVar &other) = delete;

    // 禁止赋值拷贝
    SingleLazyStaticVar &operator=(const SingleLazyStaticVar &other) = delete;

    // 析构函数，私有化，防止外部调用
    ~SingleLazyStaticVar();
};

#endif // SINGLE_LAZY_STATIC_VAR_H