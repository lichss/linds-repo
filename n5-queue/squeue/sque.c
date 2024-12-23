#include "sque.h"



Queue* queueCreat(){

    Queue* newque = NULL;
    newque = malloc(sizeof(*newque));
    if(!newque)
        return NULL;
    newque->head = newque->tail = 0;

    return newque;
}

int queueFull(Queue* handle){


    return (handle->tail +1)%MAXSIZE== handle->head;
}

int queueEmpty(Queue* handle){

    return handle->tail == handle->head;

}

int queueEn(Queue* handle,datatype* data){

    if(queueFull(handle)){
        printf("full. \n");
        return -1;
    }
    handle->tail = (handle->tail+1)%MAXSIZE;
    handle->data[handle->tail] = *data;

    return 0;

}

int queueDe(Queue* handel, datatype* data){

    if(queueEmpty(handel)){
        print("Empty. refuse Depart.\n");
        return -1;
    }
    handel->head = (handel->head + 1)%MAXSIZE;
    *data = handel->data[handel->head];

    return 0;
}

int print(){



}
