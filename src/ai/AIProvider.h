#ifndef TURTLE_AI_PROVIDER_H
#define TURTLE_AI_PROVIDER_H

#include <string>

class AIProvider
{
public:
    virtual ~AIProvider(){}

    virtual std::string chat(
        const std::string& prompt
    ) = 0;

};

#endif
