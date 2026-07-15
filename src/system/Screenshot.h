#ifndef TURTLE_SCREENSHOT_H
#define TURTLE_SCREENSHOT_H

#include <string>

class Screenshot
{
public:
    Screenshot();
    bool capture(const std::string& file);
};

#endif
