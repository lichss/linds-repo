#ifndef __LINKED__H__
#define __LINKED__H__

//#define printf("[%s]:%d",__FUNCTION__,__LINE__) debug_print 

typedef int Datatype;

typedef struct linkedList{

	Datatype value;
	struct linkedList* next;	
	


} linkedList;


void* linkedCreat();

int linkedInitset(linkedList* head,int valueArray[],int size);

int linkedPrint(linkedList* head);
int linkedInsert(linkedList* head,linkedList* nodeToInsert,int index);




#endif
