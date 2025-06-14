
#include "../include/QueryCommand.h"

QueryCommand::QueryCommand(SQLOperator *opt) : m_sqlOperator(opt)
{
}

void QueryCommand::Handle()
{
    this->m_sqlOperator->Select();
}