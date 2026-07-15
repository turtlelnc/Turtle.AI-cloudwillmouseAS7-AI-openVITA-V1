#include "Ollama.h"
#include <iostream>

Ollama::Ollama(const std::string& m)
{
    model=m;
}

std::string Ollama::chat(const std::string& prompt)
{
    std::cout<<"[Ollama] model="<<model<<std::endl;
    std::cout<<"Prompt: "<<prompt<<std::endl;

    // TODO:
    // HTTP POST 127.0.0.1:11434/api/chat

    return "Ollama接口已连接，等待HTTP模块实现";
}
