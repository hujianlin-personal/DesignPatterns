
#pragma once
#ifndef DELETE_COMMAND_H
#define DELETE_COMMAND_H

#include "DbCommand.h"
#include "SQLOperator.h"

class DeleteCommand : public DbCommand
{

public:
    DeleteCommand(SQLOperator *opt);
    void Handle() override;

private:
    SQLOperator *m_sqlOperator;
};

#endif // DELETE_COMMAND_H