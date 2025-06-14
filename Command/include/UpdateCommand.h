#pragma once
#ifndef UPDATE_COMMAND_H
#define UPDATE_COMMAND_H

#include "DbCommand.h"
#include "SQLOperator.h"

class UpdateCommand : public DbCommand
{
public:
    UpdateCommand(SQLOperator *opt);
    void Handle() override;

private:
    SQLOperator *m_sqlOperator;
};

#endif // UPDATE_COMMAND_H
