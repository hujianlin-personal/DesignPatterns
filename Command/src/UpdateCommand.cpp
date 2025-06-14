
#include "../include/UpdateCommand.h"

UpdateCommand::UpdateCommand(SQLOperator *opt) : m_sqlOperator(opt)
{
}

void UpdateCommand::Handle()
{
    this->m_sqlOperator->Update();
}