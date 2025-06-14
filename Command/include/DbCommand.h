/*
 * @Descripttion:数据库Command接口类
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-03-17 14:57:22
 * @LastEditors: hujianlin
 * @LastEditTime: 2025-06-14 20:48:37
 */

#ifndef _DbCOMMAND_H_
#define _DbCOMMAND_H_

class DbCommand
{
public:
    virtual ~DbCommand() = default;
    // 执行命令
    virtual void Handle() = 0;
};

#endif
