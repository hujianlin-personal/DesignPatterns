/*
 * @Description:
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-04-07 21:21:46
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-04-07 21:23:55
 */

#include "../include/SingleLazyStaticVar.h"

#include <iostream>

// 构造函数
SingleLazyStaticVar::SingleLazyStaticVar()
{
    std::cout << "SingleLazyStaticVar::SingleLazyStaticVar()" << std::endl;
}

// 析构函数
SingleLazyStaticVar::~SingleLazyStaticVar()
{
    std::cout << "SingleLazyStaticVar::~SingleLazyStaticVar()" << std::endl;
}

// 单例获取接口
SingleLazyStaticVar &SingleLazyStaticVar::GetInstance()
{
    static SingleLazyStaticVar instance;
    return instance;
}