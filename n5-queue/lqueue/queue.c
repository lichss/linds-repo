#include "queue.h"

Queue* queueCreat(int initSize){

    LinkedList* newQueue = 
    linkedCreat(initSize);

    

}
int queueEn(Queue* handle,const void* data){

    return linkedInsert(handle,data,INSERT_MODE_BACKWARD);

}

static int alwaysFalse(const void* v1, const void* v2){

    return 0;
}

int queueDe(Queue* handle,void* data){

    linkedFetch(handle,NULL,alwaysFalse,data);
    return 0;
}

int queueEmpty(Queue* handle){

    return handle->head.next == &handle->head;
}

