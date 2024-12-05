#ifndef __LINKED__H__
#define __LINKED__H__

//#define printf("[%s]:%d",__FUNCTION__,__LINE__) debug_print 

typedef int Datatype;

typedef struct linkedList{

	Datatype value;
	struct linkedList* next;	
	


} linkedList;


linkedList* linkedCreat();

int linkedInitset(linkedList* head,int valueArray[],int size);

int linkedIsEmpty(linkedList* head){

int linkedPrint(linkedList* head);
int linkedInsert(linkedList* head,linkedList* nodeToInsert,int index);
int linkedInsertR(linkedList* head,linkedList* nodeToInsert,int index);
int linkedOrderInsert(linkedList* head,int,Datatype valueArray[],int size);
int linkedInsertD(linkedList* head,linkedList* nodeToInsert,int index);
int linkedDelete(linkedList* head,int indexToDelete);
linkedList* linkedDeleteHead(linkedList* head);

void linkedDestruction(linkedList* head);

#endif
