/*
 * @Description:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-04-07 21:25:13
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-04-08 11:13:19
 */

#include "include/SingleLazyStaticVar.h"
#include "include/SingleHungryStaticPointer.h"
#include "include/SingleLazyStaticPointer.h"
#include "include/SingleLazyStaticSmartPointer.h"
#include "SingletonTemplate.h"
#include "include/SingleDbManager.h"

#include <iostream>
#include <thread>
#include <mutex>
#include <memory>

// 测试单例模式，懒汉式局部静态变量
void TestSingleLazyStaticVar()
{
    std::cout << "TestSingleLazyStaticVar():begin" << std::endl;
    std::thread t1([]() -> void
                   {
        SingleLazyStaticVar &instance = SingleLazyStaticVar::GetInstance();
        std::cout << "t1:instance=" << &instance << std::endl; });

    std::thread t2([]() -> void
                   {
        SingleLazyStaticVar &instance = SingleLazyStaticVar::GetInstance();
        std::cout << "t2:instance=" << &instance << std::endl; });

    t1.join();
    t2.join();

    std::cout << "TestSingleLazyStaticVar():end" << std::endl;
}

// 测试单例模式，饿汉式静态指针
void TestSingleHungryStaticPointer()
{
    std::cout << "TestSingleHungryStaticPointer():begin" << std::endl;
    std::thread t1([]() -> void
                   {
        SingleHungryStaticPointer*instance = SingleHungryStaticPointer::GetInstance();
        std::cout << "t1:instance=" << instance << std::endl; });

    std::thread t2([]() -> void
                   {
        SingleHungryStaticPointer *instance = SingleHungryStaticPointer::GetInstance();
        std::cout << "t2:instance=" << instance << std::endl; });

    t1.join();
    t2.join();

    // 手动回收内存
    delete SingleHungryStaticPointer::GetInstance();

    std::cout << "TestSingleHungryStaticPointer():end" << std::endl;
}

// 测试单例模式，懒汉式静态指针
void TestSingleLazyStaticPointer()
{
    std::cout << "TestSingleLazyStaticPointer():begin" << std::endl;
    std::thread t1([]() -> void
                   {
        SingleLazyStaticPointer*instance = SingleLazyStaticPointer::GetInstance();
        std::cout << "t1:instance=" << instance << std::endl; });

    std::thread t2([]() -> void
                   {
        SingleLazyStaticPointer *instance = SingleLazyStaticPointer::GetInstance();
        std::cout << "t2:instance=" << instance << std::endl; });

    t1.join();
    t2.join();

    // 手动回收内存
    delete SingleLazyStaticPointer::GetInstance();

    std::cout << "TestSingleLazyStaticPointer():end" << std::endl;
}

// 测试单例模式，懒汉式智能指针
void TestSingleLazyStaticSmartPointer()
{
    std::cout << "TestSingleLazyStaticSmartPointer():begin" << std::endl;
    std::thread t1([]() -> void
                   {
        std::shared_ptr<SingleLazyStaticSmartPointer> instance = SingleLazyStaticSmartPointer::GetInstance();
        std::cout << "t1:instance=" << instance << std::endl; });

    std::thread t2([]() -> void
                   {
        std::shared_ptr<SingleLazyStaticSmartPointer> instance = SingleLazyStaticSmartPointer::GetInstance();
        std::cout << "t2:instance=" << instance << std::endl; });

    t1.join();
    t2.join();
    std::cout << "TestSingleLazyStaticSmartPointer():end" << std::endl;
}

// 测试单例模式，模板类
void TestSingletonTemplate()
{
    std::cout << "TestSingletonTemplate():begin" << std::endl;
    std::thread t1([]() -> void
                   {
        std::shared_ptr<SingleDbManager> instance = SingleDbManager::GetInstance();
        std::cout<<"t1:instance="<<instance<<std::endl; });
    std::thread t2([]() -> void
                   {
        std::shared_ptr<SingleDbManager> instance = SingleDbManager::GetInstance();
        std::cout<<"t2:instance="<<instance<<std::endl; });
    t1.join();
    t2.join();
    std::cout << "TestSingletonTemplate():end" << std::endl;
}

int main()
{
    // TestSingleLazyStaticVar();
    // TestSingleHungryStaticPointer();
    // TestSingleLazyStaticPointer();
    // TestSingleLazyStaticSmartPointer();
    // TestSingletonTemplate();
    return 0;
}