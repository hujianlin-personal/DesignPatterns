/*
 * @Description: 饿汉式静态成员变量指针实现单例模式
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-04-07 22:10:10
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-04-07 22:13:37
 */

#ifndef SINGLE_HUNGRY_STATIC_POINTER_H
#define SINGLE_HUNGRY_STATIC_POINTER_H

class SingleHungryStaticPointer
{
public:
    // 析构函数
    // 必须声明为public，否则外部无法析构
    ~SingleHungryStaticPointer();

    // 单例获取接口
    static SingleHungryStaticPointer *GetInstance();

private:
    // 构造函数私有化，避免外部创建对象
    SingleHungryStaticPointer();

    // 禁止拷贝构造
    SingleHungryStaticPointer(const SingleHungryStaticPointer &other) = delete;

    // 禁止赋值拷贝
    SingleHungryStaticPointer &operator=(const SingleHungryStaticPointer &other) = delete;

private:
    static SingleHungryStaticPointer *_instance; // 静态成员变量指针
};

#endif // SINGLE_HUNGRY_STATIC_POINTER_H