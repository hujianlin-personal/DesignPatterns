#pragma once
#ifndef QUERY_COMMAND_H
#define QUERY_COMMAND_H

#include "DbCommand.h"
#include "SQLOperator.h"

class QueryCommand : public DbCommand
{
public:
    QueryCommand(SQLOperator *opt);
    void Handle() override;

private:
    SQLOperator *m_sqlOperator;
};

#endif // QUERY_COMMAND_H