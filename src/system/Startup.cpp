#include "Startup.h"
#include <iostream>

Startup::Startup()
{
}

bool Startup::enable()
{
    std::cout<<"Startup enabled"<<std::endl;

    // TODO:
    // HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Run

    return true;
}
