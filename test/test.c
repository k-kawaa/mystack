#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Device/Device.h"

int main(void)
{
    tap_device dev;
    char name[] = "tap0";
    memset(&dev,0,sizeof(tap_device));
    memcpy(&dev,name,sizeof(name));
    int err = OpenTap(&dev);
    if (err < 0)
    {
        return -1;
    }
    printf("test tap opened! \n");
    err = CloseTap(&dev);
    if (err < 0)
    {
        return -1;
    }
    
}