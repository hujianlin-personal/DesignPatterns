
#pragma once
#ifndef ADD_COMMAND_H
#define ADD_COMMAND_H

#include "DbCommand.h"
#include "SQLOperator.h"

class AddCommand : public DbCommand
{
public:
    AddCommand(SQLOperator *opt);

    void Handle() override;

private:
    SQLOperator *m_sqlOperator;
};

#endif // ADD_COMMAND_H