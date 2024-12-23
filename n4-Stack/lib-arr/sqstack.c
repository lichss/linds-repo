#include "sqstack.h"



Stack* stackCreat(){

    Stack* newStack;
    newStack = malloc(sizeof(*newStack));
    if(newStack){
        newStack->top = -1;

    }
    return newStack;    
}


int stackEmpty(Stack* s){
    return (s->top == -1);
}

int stackPush(Stack* s,datatype* d){

    s->top++;
    if ( !s->top<MAXSIZE){
        return -1;
    }
    s->data[s->top] = d;
    return 0;
}


int stackPop(Stack* s,datatype* d){
    if(s->top == -1)
        return 0;
    s->top--;
    return 0; 
}

int stackTop(Stack* s,datatype* d){
    if(s->top!=-1)
        *d = s->data[s->top];
    else
        return -1; 
    
    return 0;
}
int stackDestruction(Stack* s){
    free(s);

    return 0;
}
/*
int stackCreat(Stack* s);

int stackEmpty(Stack* s);

int stackPush(Stack* s,datatype* d);

int stackPop(Stack* s,datatype* d);

int stackTop(Stack* s,datatype* d);

int stackPrint(Stack* s);

int stackDestruction(Stack* s);

*/