#ifndef _STACK_H__
#define _STACK_H__

#include "llist.h"

#define STACK_MAX_SIZE 5

typedef struct Stack
{
    int top;
    LinkedList* lhandle;
    
    /* data */
} Stack;

typedef Stack* creatF(int);

Stack* stackCreat(int initSize);

int stackPush(Stack* handle ,void* data);

int stackPop(Stack* handel, void* data);

int stackPrint(Stack* handle,linkedP callback);



#endif

