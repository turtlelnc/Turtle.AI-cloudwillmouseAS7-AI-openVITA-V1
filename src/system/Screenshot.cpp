#include "Screenshot.h"
#include <iostream>

Screenshot::Screenshot()
{
}

bool Screenshot::capture(const std::string& file)
{
    std::cout<<"Screenshot:"<<file<<std::endl;

    // TODO:
    // Win32 GDI
    // DXGI Desktop Duplication

    return true;
}
