
#include "../include/SingleLazyStaticSmartPointer.h"

#include <iostream>
#include <memory>
#include <mutex>

// 静态成员初始化
std::shared_ptr<SingleLazyStaticSmartPointer> SingleLazyStaticSmartPointer::_instance = nullptr;

// 构造函数
SingleLazyStaticSmartPointer::SingleLazyStaticSmartPointer()
{
    std::cout << "SingleLazyStaticSmartPointer::SingleLazyStaticSmartPointer()" << std::endl;
}

// 析构函数
SingleLazyStaticSmartPointer::~SingleLazyStaticSmartPointer()
{
    std::cout << "SingleLazyStaticSmartPointer::~SingleLazyStaticSmartPointer()" << std::endl;
}

// 获取单例
std::shared_ptr<SingleLazyStaticSmartPointer> SingleLazyStaticSmartPointer::GetInstance()
{
    static std::once_flag flag;
    // 调用一次，保证只执行一次。
    // 注意不要使用std::make_shared，因为构造函数已经被private了。
    std::call_once(flag, []() -> void
                   { _instance =
                         std::shared_ptr<SingleLazyStaticSmartPointer>(new SingleLazyStaticSmartPointer, SingleLazyStaticSmartPointerDeletor()); });
    return _instance;
}

void SingleLazyStaticSmartPointerDeletor::operator()(SingleLazyStaticSmartPointer *p)
{
    std::cout << "SingleLazyStaticSmartPointerDeletor::operator()" << std::endl;
    delete p;
}