#include "fcgi_stdio.h"
#include <stdlib.h>
#include <iostream>
#include <exception>
int main(void)
{
    using namespace std;
    int count = 0;
    while(FCGI_Accept() >= 0) {

        try {
            printf("Content-type: text/html\r\n"
                   "\r\n"
                   "<title>FastCGI Hello!</title>"
                   "<h1>FastCGI Hello!</h1>"
                   "Request number %d running on host <i>%s</i>, file %s\n",
                ++count, getenv("SERVER_NAME"), getenv("SCRIPT_NAME"));
            printf("<p>REQUEST_METHOD <strong>%s</strong></p>", getenv("REQUEST_METHOD"));
            printf("<p>SERVER_NAME <strong>%s</strong></p>", getenv("SERVER_NAME"));
            printf("<p>SCRIPT_FILENAME <strong>%s</strong></p>", getenv("SCRIPT_FILENAME"));
            printf("<p>QUERY_STRING <strong>%s</strong></p>", getenv("SERVER_NAME"));

            printf("<p>SCRIPT_NAME <strong>%s</strong></p>", getenv("SCRIPT_NAME"));
            printf("<p>REQUEST_URI <strong>%s</strong></p>", getenv("REQUEST_URI"));
            printf("<p>DOCUMENT_URI <strong>%s</strong></p>", getenv("DOCUMENT_URI"));

            printf("<p>DOCUMENT_ROOT <strong>%s</strong></p>", getenv("DOCUMENT_ROOT"));
            printf("<p>SERVER_PROTOCOL <strong>%s</strong></p>", getenv("SERVER_PROTOCOL"));
            printf("<p>GATEWAY_INTERFACE <strong>%s</strong></p>", getenv("GATEWAY_INTERFACE"));
            printf("<p>SERVER_SOFTWARE <strong>%s</strong></p>", getenv("SERVER_SOFTWARE"));
            printf("<p>REMOTE_ADDR <strong>%s</strong></p>", getenv("REMOTE_ADDR"));
            printf("<p>REMOTE_PORT <strong>%s</strong></p>", getenv("REMOTE_PORT"));
            printf("<p>SERVER_ADDR <strong>%s</strong></p>", getenv("SERVER_ADDR"));
            printf("<p>SERVER_PORT <strong>%s</strong></p>", getenv("SERVER_PORT"));

            printf("<p>REDIRECT_STATUS <strong>%s</strong></p>", getenv("REDIRECT_STATUS"));
            printf("<p>HTTP_HOST <strong>%s</strong></p>", getenv("HTTP_HOST"));
            printf("<p>HTTP_CONNECTION <strong>%s</strong></p>", getenv("HTTP_CONNECTION"));
            printf("<p>HTTP_ACCEPT <strong>%s</strong></p>", getenv("HTTP_ACCEPT"));
            printf("<p>HTTP_USER_AGENT <strong>%s</strong></p>", getenv("HTTP_USER_AGENT"));
            printf("<p>HTTP_ACCEPT_ENCODING <strong>%s</strong></p>", getenv("HTTP_ACCEPT_ENCODING"));
            printf("<p>HTTP_ACCEPT_LANGUAGE <strong>%s</strong></p>", getenv("HTTP_ACCEPT_LANGUAGE"));

            //printf("<p>HTTP_ACCEPT_CHARSET <strong>%s</strong></p>", getenv("HTTP_ACCEPT_CHARSET"));
            printf("<p>CONTENT_TYPE <strong>%s</strong></p>", getenv("CONTENT_TYPE"));
            printf("<p>CONTENT_LENGTH <strong>%s</strong></p>", getenv("CONTENT_LENGTH"));

        } catch(exception& e) {
            printf("<p>exception %s</p>", e.what());
        }
    }
    return 0;
}