#include "Hotkey.h"
#include <iostream>

Hotkey::Hotkey()
{
}

bool Hotkey::registerKey(int key)
{
    std::cout<<"Register global hotkey:"<<key<<std::endl;

    // TODO:
    // Windows RegisterHotKey
    // RawInput hook

    return true;
}
