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
    }else
    {
        do
        {
            pos = pos->next;
        }while (pos->next != NULL);
        memcpy(pos->address,address,4);
        memcpy(pos->mac,mac,6);
    }
    return 0;
}

//IPアドレスからMACアドレスを取得する。存在しない場合はNULL。
//存在する場合はポインタを返す（解放不要）
__uint8_t *GetMac(arp_table *head,__uint8_t *address){
    arp_table *pos;
    pos = head;
    if(pos->next == NULL){
        if(address[0] == pos->address[0]
            && address[1] == pos->address[1]
            && address[2] == pos->address[2]
            && address[3] == pos->address[3]){
            return &(pos->mac);
        }else{
            return NULL;
        }
    }

    do{
        pos = pos->next;
        if(address[0] == pos->address[0]
            && address[1] == pos->address[1]
            && address[2] == pos->address[2]
            && address[3] == pos->address[3]){
            return &(pos->mac);
        }
    }while(pos->next != NULL);

    return NULL;
}


//テーブルの値を更新する関数（存在しない時、-1を返す）
int UpdateTable(arp_table *head,__uint8_t *address[],__uint8_t *modified_mac[]){

    return 0;
}

void ShowTable(arp_table *table){
    printf("[Debug]\n\n");
    arp_table *pos = table;

    do
    {
        printf("arp_table=====\n ip:%d.%d.%d.%d \n mac: %X-%X-%X-%X-%X-%X\n",pos->address[0],pos->address[1],pos->address[2],pos->address[3],pos->mac[0],pos->mac[1],pos->mac[2],pos->mac[3],pos->mac[4],pos->mac[5]);
        if (pos->next == NULL)break;
        pos = pos->next;
    }while (pos->next != NULL);

}

int RemoveTable(arp_table *head,__uint8_t *address[]){
    arp_table *pos;
    
    if(head->address == NULL){
        return -1;
    }

    pos = head;

    do{

    }while (memcmp(&(pos->address),address,sizeof(address)) != 0);
    
}
