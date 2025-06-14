
#pragma once
#ifndef SQL_OPERATOR_H
#define SQL_OPERATOR_H

class SQLOperator
{
public:
    static SQLOperator *GetInstance();

    // 禁止拷贝和赋值
    SQLOperator(const SQLOperator &) = delete;
    SQLOperator &operator=(const SQLOperator &) = delete;

    // 执行SQL操作
    void Add();
    void Update();
    void Delete();
    void Select();

private:
    SQLOperator() = default;
};

#endif // SQL_OPERATOR_H