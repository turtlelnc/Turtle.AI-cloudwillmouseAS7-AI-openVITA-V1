#include "RawInput.h"
#include <iostream>

RawInput::RawInput()
{
}

bool RawInput::init()
{
    std::cout<<"RawInput initialized"<<std::endl;

    // TODO:
    // RegisterRawInputDevices

    return true;
}
