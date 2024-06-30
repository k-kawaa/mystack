#ifndef socket_H
#define socket_H

typedef struct{
    int domain
    int type;
    int protocol;
    int fd;
}socket;

#define SOCK_IPv4 100;
#define SOCK_IPv6 101;

#define SOCK_UDP SOCK_DGRAM
#define SOCK_TCP SOCK_STREAM

#endif