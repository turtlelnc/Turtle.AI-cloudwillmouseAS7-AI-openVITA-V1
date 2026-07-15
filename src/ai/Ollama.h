#ifndef TURTLE_OLLAMA_H
#define TURTLE_OLLAMA_H

#include "AIProvider.h"

class Ollama: public AIProvider
{
private:
    std::string model;
public:
    Ollama(const std::string& m);
    std::string chat(const std::string& prompt);
};

#endif
