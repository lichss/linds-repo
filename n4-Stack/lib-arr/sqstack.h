

#ifndef SQSTACK_H__
#define SQSTACK_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAXSIZE 8

typedef int datatype;

typedef struct Stack{

    datatype data[MAXSIZE];
    int top;

} Stack;

Stack* stackCreat();

int stackEmpty(Stack* s);

int stackPush(Stack* s,datatype* d);

int stackPop(Stack* s,datatype* d);

int stackTop(Stack* s,datatype* d);

int stackPrint(Stack* s);

int stackDestruction(Stack* s);



#endif
