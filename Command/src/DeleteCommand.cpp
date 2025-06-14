#include "../include/DeleteCommand.h"

DeleteCommand::DeleteCommand(SQLOperator *opt) : m_sqlOperator(opt)
{
}

void DeleteCommand::Handle()
{
    this->m_sqlOperator->Delete();
}