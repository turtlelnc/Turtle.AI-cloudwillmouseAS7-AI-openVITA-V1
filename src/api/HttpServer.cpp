#include "HttpServer.h"
#include <iostream>

HttpServer::HttpServer()
{
}

void HttpServer::start(int port)
{
    std::cout<<"turtle-openVITA HTTP API listening:"<<port<<std::endl;
}
