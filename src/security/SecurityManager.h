#ifndef TURTLE_SECURITY_MANAGER_H
#define TURTLE_SECURITY_MANAGER_H

#include <string>

class SecurityManager
{
public:
    bool checkPermission(const std::string& action);
    void log(const std::string& event);
};

#endif
