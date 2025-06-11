/*
 * @Description:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-04-07 22:14:23
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-04-07 22:14:37
 */

#include "../include/SingleHungryStaticPointer.h"

#include <iostream>

// 静态变量初始化
SingleHungryStaticPointer *SingleHungryStaticPointer::_instance = SingleHungryStaticPointer::GetInstance();

// 构造函数
SingleHungryStaticPointer::SingleHungryStaticPointer()
{
    std::cout << "SingleHungryStaticPointer::SingleHungryStaticPointer()" << std::endl;
}

// 析构函数
SingleHungryStaticPointer::~SingleHungryStaticPointer()
{
    std::cout << "SingleHungryStaticPointer::~SingleHungryStaticPointer()" << std::endl;
}

// 单例获取接口
SingleHungryStaticPointer *SingleHungryStaticPointer::GetInstance()
{
    if (nullptr == _instance)
    {
        _instance = new SingleHungryStaticPointer();
    }

    return _instance;
}