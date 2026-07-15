#ifndef TURTLE_HTTP_CLIENT_H
#define TURTLE_HTTP_CLIENT_H

#include <string>

class HttpClient
{
public:
    HttpClient();

    std::string post(
        const std::string& url,
        const std::string& body
    );
};

#endif
