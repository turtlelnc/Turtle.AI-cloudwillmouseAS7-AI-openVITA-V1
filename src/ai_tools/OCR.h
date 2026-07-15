#ifndef TURTLE_OCR_H
#define TURTLE_OCR_H

#include <string>

class OCR
{
public:
    OCR();
    std::string recognize(const std::string& image);
};

#endif
