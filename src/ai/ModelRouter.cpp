#include "ModelRouter.h"

ModelRouter::ModelRouter()
{
    provider=0;
}

void ModelRouter::setProvider(AIProvider* p)
{
    provider=p;
}

std::string ModelRouter::ask(const std::string& text)
{
    if(provider)
        return provider->chat(text);

    return "没有AI模型提供者";
}
