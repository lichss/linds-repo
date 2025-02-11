#include <stdio.h>
#include "queue.h"


typedef struct test{
    int id;
    char name[20];
    int data1;
    int data2;



} test;

int tPrint(const void* stv){
	if(!stv)
		return 1;
	const test* st = stv;
	printf("%d %s %d %d\n",st->id,st->name,st->data1,st->data2);

	return 0;
}

int main(){

    printf("run----\n");

    test data;
    
    
    Queue* handel;
    handel = queueCreat(sizeof(data));

    if(queueEmpty(handel))
        printf("empty\n");

    for(int i=0;i<5;i++){
        data.id = i;
        sprintf(data.name,"idid%d",i);
        data.data1 = rand()%100;
        data.data2 = rand()%100;

        queueEn(handel,&data);
    }
    test get;
    queueDe(handel,&get);
    queueDe(handel,&get);
    queueDe(handel,&get);

    tPrint(&get);
    

    printf("end------\n");
    return 0;
}