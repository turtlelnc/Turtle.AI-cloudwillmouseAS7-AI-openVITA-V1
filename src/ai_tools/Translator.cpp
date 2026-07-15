#include "Translator.h"

Translator::Translator()
{
}

std::string Translator::translate(const std::string& text,const std::string& lang)
{
    return "Translate(" + lang + "): " + text;
}
