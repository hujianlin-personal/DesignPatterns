#include "../include/AddCommand.h"

AddCommand::AddCommand(SQLOperator *opt) : m_sqlOperator(opt)
{
}

void AddCommand::Handle()
{
    this->m_sqlOperator->Add();
}