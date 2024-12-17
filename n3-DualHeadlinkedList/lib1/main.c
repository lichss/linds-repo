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

int tprint(const void* stv){
	if(!stv)
		return 1;
	const testST* st = stv;
	printf("%d %s %d %d\n",st->id,st->name,st->data1,st->data2);

	return 0;
}

int testST_CMP(const void* var1,const void* var2){
	const int* v1 = var1;
	const testST* v2 = var2;

	return v2->id - *v1;

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
		linkedInsert(handle,&newst,INSERT_MODE_BACKWARD);
	}

	linkedPrint(handle,tprint);
	int ftest;
	ftest = 9;
	linkNode* node = linkedFind(handle,&ftest,testST_CMP);
	tprint(node->data );	

	
	printf("runover\n");
	return 0;
}
