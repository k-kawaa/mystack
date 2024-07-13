#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <linux/if.h>
#include <linux/if_tun.h>

#include "Device.h"

int OpenTap(tap_device *dev){
    int fd = 0;
    struct ifreq ifr;
    int error = 0;
    errno = 0;
    
    fd = open("/dev/net/tun",O_RDWR);
    if(fd < 0){
        printf("tap open error (%s)",strerror(errno));
        return -1;
    }
    memcpy(&(dev->fd),&fd,sizeof(fd));

    memset(&ifr,0,sizeof(ifr));
    ifr.ifr_flags = IFF_TAP | IFF_NO_PI;
    memcpy(ifr.ifr_name,dev->name,sizeof(ifr.ifr_name));
    error = ioctl(fd,TUNSETIFF,&ifr);
    if(error < 0){
        printf("ioctl error (%s)",strerror(errno));
        return -1;
    }
    
    return 0;
}

int CloseTap(tap_device *dev){
    int error = 0;
    errno = 0;

    error = close(dev->fd);
    if(error == -1){
        printf("tap close error (%s)",strerror(errno));
        return -1;
    }

    return 0;
}
