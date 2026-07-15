#ifndef TURTLE_MODEL_ROUTER_H
#define TURTLE_MODEL_ROUTER_H

#include "AIProvider.h"

class ModelRouter
{
private:
    AIProvider* provider;

public:
    ModelRouter();
    void setProvider(AIProvider* p);
    std::string ask(const std::string& text);
};

#endif
