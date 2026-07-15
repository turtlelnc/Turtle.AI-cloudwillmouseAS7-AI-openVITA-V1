#ifndef TURTLE_TRANSLATOR_H
#define TURTLE_TRANSLATOR_H

#include <string>

class Translator
{
public:
    Translator();
    std::string translate(const std::string& text,const std::string& lang);
};

#endif
