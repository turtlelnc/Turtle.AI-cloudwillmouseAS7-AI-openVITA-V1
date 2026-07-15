#include "Clipboard.h"
#include <iostream>

Clipboard::Clipboard()
{
}

std::string Clipboard::getText()
{
    // TODO Windows OpenClipboard
    return "";
}

bool Clipboard::setText(const std::string& text)
{
    std::cout<<"Clipboard write:"<<text<<std::endl;
    return true;
}
