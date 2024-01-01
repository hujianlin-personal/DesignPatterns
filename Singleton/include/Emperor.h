#include <windows.h>
#include <winnt.h>

#ifndef _EMPEROR_H_
#define _EMPEROR_H_

//皇帝类
class Emperor
{
public:
    /*
     * 获取单例指针
     */
    static Emperor *GetInstance();

    /*
     * 释放单例指针
     */
    static void ReleaseInstance();

    /*
     * 设置年号
     */
    void SetTitle(const string &title);

    /*
     * 展示信息
     */
    void DisplayEmperorInfo();

private:
    /*
     * initailize a new instance of class
     */
    Emperor();

    /*
     * 析构函数
     */
    virtual ~Emperor();

private:
    static Emperor *m_instance; //单例指针
    static HANDLE m_mutex;      //互斥锁
    string m_title;             //年号
};

#endif