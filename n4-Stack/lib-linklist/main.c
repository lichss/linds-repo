#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

#define NAMESIZE 16

typedef struct testST
{
	int id;
	char name[NAMESIZE];
	int data1;
	int data2;
} testST;

int tstPrint(const void* stv){
	if(!stv)
		return 1;
	const testST* st = stv;
	printf("%d %s %d %d\n",st->id,st->name,st->data1,st->data2);

	return 0;
}

int astackPop(Stack* handel, void* data){

    if(handel->top== -1){
        printf("pop err\n");
        return -1;
    }
    

    memcpy(data,handel->lhandle->head.prev->data,handel->lhandle->size);
    //tstPrint(handel->lhandle->head.next->data);
    handel->top--;
    return 0; 

}


int main(){
    printf("running-------\n");

    Stack* shandle = stackCreat(sizeof(testST)); 
    testST t;

    for(int i=0;i<8;i++){
        t.id = i;
        sprintf(t.name,"st%d",i);
        t.data1 = rand()%100;
        t.data2 = rand()%100;

        int ret = stackPush(shandle,&t);
        printf("st.top = %d\n",shandle->top);
        if(ret)
            printf("insert err\n");

    }
    stackPrint(shandle,tstPrint);

    testST tpop;
    tstPrint(&tpop);
    stackPop(shandle,&tpop);

    printf("show pop------\n");
    tstPrint(&tpop);
    
    printf("quit---------\n");
    return 0;
}