#include <sys/socket.h>
#include <arpa/inet.h>
#include <linux/if_ether.h>

#include <errno.h>
#include <stdio.h>

int opensock(){
    errno = 0;

    int sock = socket(PF_PACKET,SOCK_RAW,htons(ETH_P_ALL));
    if(sock == -1){
        printf("socke open failed. %d \n",errno);
    }
    return sock;
}