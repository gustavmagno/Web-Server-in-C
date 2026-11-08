#ifndef Server_h
#define Server_h

#include <sys/socket.h>
#include <netinet/in.h>

struct Server
{
    int domain;
    int service;
    int protocol;
    u_long interface;
    int port;
    int backlog;
};


#endif 