#include "SecurityManager.h"
#include <iostream>

bool SecurityManager::checkPermission(const std::string& action)
{
    if(action=="delete_file")
        return false;

    return true;
}

void SecurityManager::log(const std::string& event)
{
    std::cout << "AUDIT:" << event << std::endl;
}
