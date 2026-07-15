#include "HttpClient.h"
#include <iostream>

HttpClient::HttpClient()
{
}

std::string HttpClient::post(
    const std::string& url,
    const std::string& body)
{
    std::cout<<"HTTP POST: "<<url<<std::endl;
    std::cout<<body<<std::endl;

    // TODO:
    // Windows WinHTTP implementation
    // curl implementation

    return "HTTP模块等待底层实现";
}
