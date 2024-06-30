#include <sys/socket.h>
#include <arpa/inet.h>
#include <linux/if_ether.h>

#include <errno.h>
#include <stdio.h>

#include <socket.h>

//プロトコルスタック用の通信ソケット
int opensock(){
    errno = 0;

    int sock = socket(PF_PACKET,SOCK_RAW,htons(ETH_P_ALL));
    if(sock == -1){
        printf("socket open failed. %d \n",errno);
    }
    return sock;
}

int sock_create(socket *socket){
    int domain = 0;
    switch (socket->domain)
    {
    case SOCK_IPv4:
        domain = 2;
        break;
    case SOCK_IPv6:
        domain = 10;
        break;
    default:
        printf("unsupported domain type.");
        return -1;
    }

}