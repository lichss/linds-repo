#include <stdlib.h>
#include <stdio.h>
#include "sque.h"


int main(){
    printf("run------\n");
    int data[] = {1,2,3,4,5};
    int get = 99;
    Queue* handle = queueCreat();

    if(queueEmpty(handle))
        printf("now emp\n");

    queueEn(handle, data);
    queueEn(handle, data+1);
    queueEn(handle, data+2);
    if(queueFull(handle))
        printf("now full\n");
    queueDe(handle,&get);
    printf("get :%d\n",get);
    queueDe(handle,&get);
    printf("get :%d\n",get);
    queueDe(handle,&get);
    printf("get :%d\n",get);

    if(queueEmpty(handle))
        printf("now emp\n");

    if( !queueEn(handle, data))
        printf("en ss\n");
 
    printf("head: %d tail: %d\n",handle->head,handle->tail);



    printf("returned-----\n");
    return 0;
}


