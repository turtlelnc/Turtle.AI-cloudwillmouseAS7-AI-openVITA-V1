#ifndef TURTLE_CLIPBOARD_H
#define TURTLE_CLIPBOARD_H

#include <string>

class Clipboard
{
public:
    Clipboard();
    std::string getText();
    bool setText(const std::string& text);
};

#endif
