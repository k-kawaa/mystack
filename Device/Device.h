#ifndef Device_H
#define Device_H

#include <linux/if.h>

typedef struct
{
    int fd;
    char *name[IFNAMSIZ];
    char addr[];
} tap_device;

int OpenTap(tap_device *dev);
int CloseTap(tap_device *dev);

#endif