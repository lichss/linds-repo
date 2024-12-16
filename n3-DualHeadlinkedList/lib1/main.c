#include <stdio.h>
#include <stdlib.h>
#include "llist.h"

#define NAMESIZE 32


typedef struct testST
{
	int id;
	char name[NAMESIZE];
	int data1;
	int data2;
} testST;

int tprint(testST* st){

	printf("%d %s %d %d\n",st->id,st->name,st->data1,st->data2);

	return 0;
}


int main(){

	printf("ss\n");
	LinkedList* handle = linkedCreat(sizeof(testST));
	if(!handle)
		exit(1);

	for(int i=0;i<16;i++){
		testST newst;
		newst.id = i;
		snprintf(newst.name,NAMESIZE,"stu%d",i);
		newst.data1 = rand()%100;
		newst.data2 = rand()%100;	
		linkedInsert(handle,&newst,0);
		printf("%p\n",&newst);
	}
	for(int i=0;i<16;i++){
		linkNode* node = handle->head.next;
			
	}
	//linkedPrint(handle,tprint);
	printf("runover\n");
	return 0;
}
