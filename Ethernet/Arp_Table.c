#include <stdio.h>
#include <stdlib.h>

#include "Arp_Table.h"


int Init_Table(){
    arp_table *table;
    table = malloc(sizeof(arp_table));

    if(table == NULL){
        puts("Memory allocation error");
        return -1;
    }
    
}

int AddTable(arp_table *head,arp_table *table){
    arp_table *pos;
    pos = head;
    do{
        pos = pos->next;
    }while(pos->next != NULL)
    pos->next = table;
    return 0;
}