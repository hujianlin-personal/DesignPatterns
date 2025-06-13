/*
 * @Description: RealSubject类，实现ISubject接口
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2025-06-13
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-06-13
 */
#pragma once
#ifndef REAL_SUBJECT_H
#define REAL_SUBJECT_H

#include "ISubject.h"

class RealSubject : public ISubject
{
public:
    void Request() override;
};

#endif // REAL_SUBJECT_H