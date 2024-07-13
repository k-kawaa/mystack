#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>

#include "Arp_Table.h"


arp_table *Init_Table(){
    arp_table *table;
    table = malloc(sizeof(arp_table));

    if(table == NULL){
        puts("Memory allocation error");
        return NULL;
    }
    
    return table;
}

int AddTable(arp_table *head,arp_table *table){
    arp_table *pos;
    pos = head;
    do{
        pos = pos->next;
    }while(pos->next != NULL);
    pos->next = table;
    return 0;
}

int ChangeTable_MAC(arp_table *head,__uint16_t *dst[4],__uint16_t *mac[6]){
    arp_table *pos;
    pos = head;
    do{
        pos = pos->next;
    }while(memcmp(&(head->dst),dst,sizeof(dst)) != 0);
    memcpy(&(pos->mac),mac,sizeof(mac));
    return 0;
}