
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "stack.h"

Stack* stackCreat(int initSize){

    LinkedList* handleL;
    handleL = linkedCreat(initSize);
    Stack* newStack = malloc(sizeof(*newStack));
    if(!newStack){
        printf("creating error\n");
        return NULL;  
    }

    newStack->top = -1;
    newStack->lhandle = handleL;

    return newStack;

}

int stackPush(Stack* handle ,void* data){

    if(++handle->top >= STACK_MAX_SIZE){
        handle->top--;
        return -1;
    }
    linkedInsert(handle->lhandle,data,INSERT_MODE_FORWARD);

    return 0;
}

int stackPop(Stack* handel, void* data){

    if(handel->top== -1){
        printf("pop err\n");
        return -1;
    }


    memcpy(data,handel->lhandle->head.next->data,handel->lhandle->size);
     
    handel->top--;
    return 0; 

}

int stackPrint(Stack* handle,linkedP callback){

    linkedPrint(handle->lhandle,callback);

    return 0;
}
