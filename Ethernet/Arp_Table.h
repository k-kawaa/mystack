#ifndef Arp_Table_H
#define Arp_Table_H

#include <unistd.h>

typedef struct
{
    __uint16_t dst[4];  //相手IP
    __uint16_t mac[6];  //相手macアドレス
    arp_table *next;    //次のテーブル
}arp_table;

arp_table *Init_Table();
int AddTable(arp_table *head,arp_table *table);
int ChangeTable_MAC(arp_table *head,__uint16_t *dst[4],__uint16_t *mac[6]);

#endif