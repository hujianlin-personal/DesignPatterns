#include "./include/AddCommand.h"
#include "./include/DeleteCommand.h"
#include "./include/QueryCommand.h"
#include "./include/UpdateCommand.h"

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    std::queue<DbCommand *> commandQueue;
    SQLOperator *sqlOperator = SQLOperator::GetInstance();
    commandQueue.push(new AddCommand(sqlOperator));
    commandQueue.push(new QueryCommand(sqlOperator));
    commandQueue.push(new UpdateCommand(sqlOperator));
    commandQueue.push(new DeleteCommand(sqlOperator));
    while (!commandQueue.empty())
    {
        DbCommand *command = commandQueue.front();
        command->Handle();
        delete command; // 释放内存
        commandQueue.pop();
    }
    cout << "All commands executed successfully." << endl;
    return 0;
}