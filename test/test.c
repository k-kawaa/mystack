#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Device/Device.h"
#include "Ethernet/Arp_Table.h"

int main(void){
    /*tap_device dev;
    char name[] = "tap0";
    memset(&dev,0,sizeof(tap_device));
    memcpy(&dev,name,sizeof(name));
    int err = OpenTap(&dev);
    if (err < 0)
    {
        return -1;
    }
    printf("test tap opened! \n");*/

    arp_table *table = Init_Table();

    __uint8_t address[4];
    __uint8_t mac[6];
    address[0] = 192;
    address[1] = 0;
    address[2] = 2;
    address[3] = 1;

    mac[0] = 0;
    mac[1] = 0;
    mac[2] = 94;
    mac[3] = 0;
    mac[4] = 83;
    mac[5] = 0;

    AddTable(table,&address,&mac);
    AddTable(table,&address,&mac);
    u_int8_t *mac_result = GetMac(table,&address);
    /**if (mac_result != NULL) {
        printf("%u", mac_result[0]);  // MACアドレスの最初のバイトを表示
    } else
    {
        printf("MAC address not found.\n");
    }**/
    ShowTable(table);
    /**err = CloseTap(&dev);
    if (err < 0)
    {
        return -1;
    }**/

}