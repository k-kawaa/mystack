#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>

#include "Arp_Table.h"


arp_table *Init_Table(){
    arp_table *table;
    table = malloc(sizeof(arp_table));
    memset(table,0,sizeof(arp_table));

    if(table == NULL){
        puts("Memory allocation error");
        return NULL;
    }
    table->next = NULL;
    return table;
}

//テーブルにアドレスを追加する
int AddTable(arp_table *head,__uint8_t *address,__uint8_t *mac){
    arp_table *pos;
    arp_table *table = malloc(sizeof(arp_table));
    memset(table,0,sizeof(arp_table));

    memcpy(table->address,address,sizeof(table->address));
    memcpy(table->mac,mac,sizeof(table->mac));
    pos = head;
    if(pos->next == NULL){
        memcpy(head->address,address,4);
        memcpy(head->mac,mac,6);
    }
    printf("MAC: %d-%d-%d-%d-%d-%d\n",head->mac[0],head->mac[1],head->mac[2],head->mac[3],head->mac[4],head->mac[5]);
    return 0;
}

//IPアドレスからMACアドレスを取得する。存在しない場合はNULL。
//存在する場合はポインタを返す（解放不要）
__uint8_t *GetMac(arp_table *head,__uint8_t *address){
    arp_table *pos;
    pos = head;
    if(pos->next == NULL){
        printf("MAC: %d-%d-%d-%d-%d-%d\n",pos->mac[0],pos->mac[1],pos->mac[2],pos->mac[3],pos->mac[4],pos->mac[5]);
        if(memcmp(address,pos->mac,6) == 0){
            return &(pos->mac);
        }else{
            return NULL;
        }
    }

    do{
        pos = pos->next;
        if(memcmp(address,&(pos->mac),sizeof(pos->mac)) == 0){
            return &(pos->mac);
        }
    }while(pos->next != NULL);

    return NULL;
}


//テーブルの値を更新する関数（存在しない時、-1を返す）
int UpdateTable(arp_table *head,__uint8_t *address[4],__uint8_t *modified_mac[6]){

    return 0;
}

int RemoveTable(arp_table *head,__uint8_t *address[4]){
    arp_table *pos;
    
    if(head->address == NULL){
        return -1;
    }

    pos = head;

    do{

    }while (memcmp(&(pos->address),address,sizeof(address)) != 0);
    
}
