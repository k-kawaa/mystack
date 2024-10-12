#ifndef Arp_Table_H
#define Arp_Table_H

#include <unistd.h>

typedef struct{
    __uint8_t address[4];
    __uint8_t mac[6];
    struct arp_table *next;
} arp_table;

arp_table *Init_Table();
int AddTable(arp_table *head,__uint8_t *address,__uint8_t *mac);
__uint8_t *GetMac(arp_table *head,__uint8_t *address);
int UpdateTable(arp_table *head,__uint8_t *address[],__uint8_t *modified_mac[]);
void ShowTable(arp_table *table);
int RemoveTable(arp_table *head,__uint8_t *address[]);


#endif