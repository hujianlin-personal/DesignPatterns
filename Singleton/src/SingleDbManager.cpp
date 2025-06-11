
#include "SingleDbManager.h"

#include <iostream>

SingleDbManager::~SingleDbManager()
{
    std::cout << "SingleDbManager::~SingleDbManager()" << std::endl;
}

SingleDbManager::SingleDbManager()
{
    std::cout << "SingleDbManager::SingleDbManager()" << std::endl;
}