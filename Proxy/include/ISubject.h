/*
 * @Description: Subject接口类
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-06-13
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-06-13
 */
#pragma once
#ifndef ISUBJECT_H
#define ISUBJECT_H

class ISubject
{
    virtual void Request() = 0; // Pure virtual function
};

#endif // ISUBJECT_H