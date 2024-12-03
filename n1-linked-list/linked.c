#include <stdio.h>
#include <stdlib.h>

#include "linked.h"

void* linkedCreat(){

	int n = sizeof(linkedList);
	printf("sizeof(linkedList) = %d\n",n);
	
	void* creatPtr = 0;
	creatPtr = malloc(n);

	if(creatPtr)
		return creatPtr;
	else{
		printf("creating err.\n");
		return 0;
	}
}


int linkedCreatLocal(linkedList** creatPtr){




	return 0;
}

int linkedInitset(linkedList* head,int valueArray[],int size){

	linkedList* node = head;
	int i;

	for(i=0;node && i<size;i++){
		node->value = valueArray[i];	
		node = node->next;	
	}
	return i;

}

//
//现在还有个小小的问题 index 对不上。
int linkedOrderInsert(linkedList* head,int index ,Datatype valueArray[],int size){

	if(!head|| index<0)
		return -1;
	linkedList* node = head;

	int chase = 0;
	while(chase!=index){
		node = node->next;	
		chase++;
	}
	linkedList* prev = node;	
	linkedList* rear = node->next;
	int i=0;
	linkedList* newd = NULL;
	for(;i<size;i++){
		newd = linkedCreat();	
		newd->value = valueArray[i];
		prev->next = newd;
		prev = newd;
		printf("insert well\n");
	}
	newd->next = rear;
	return i;

}


int linkedPrint(linkedList* head){
	linkedList* node = head;
	int count = 0;
	while(node){

		printf("node%d --%d\n",count,node->value);
		node = node->next;
		count++;
	}
	return count;
}
//目前这样写有点问题。但我不是很想该了。等到时候写个带dummyhead
//应该好解决
int linkedInsert(linkedList* head,linkedList* nodeToInsert,int index){

	if(index<=0)
		return -1;
	linkedList* prev= NULL;
	linkedList* node= head;
	int chase=0;
	
	while(node){
		if(chase == index){
			prev->next = nodeToInsert;	
			nodeToInsert->next = node;
			return 0;
		}
		prev = node;
		node = node->next;
		chase++;
			
	}
	printf("insert err.\n");
	return -1;
}

int linkedInsertD(linkedList* head,linkedList* nodeToInsert,int index){

	if(!head){
		printf("insert err. code 1.\n");
		return -1;
	}

	linkedList* dummy = linkedCreat();
	dummy->next = head;

	linkedList* prev= dummy;
	linkedList* node= head;
	int chase=0;
	
	while(node){
		if(chase == index){
			prev->next = nodeToInsert;	
			nodeToInsert->next = node;
			return 0;
		}
		prev = node;
		node = node->next;
		chase++;
			
	}
	printf("insert err.\n");
	return -1;
}

int linkedDelete(linkedList* head,int indexToDelete){
	
	linkedList* dummy = linkedCreat();
	linkedList* prev = dummy;
	linkedList* node = head;

	if(!dummy || !head)
		return -1;
	dummy->next = head;	//确定dummy有效之后再操作。

	int chase=0;
	while(node){
		if(chase++ == indexToDelete){
			prev->next = node->next;
			return 0;	
		}
		prev = node;	
		node = node->next;	

	}
	return 0;
}


linkedList* linkedDeleteHead(linkedList* head){
	
	int indexToDelete =0;
	linkedList* dummy = linkedCreat();
	linkedList* prev = dummy;
	linkedList* node = head;

	if(!dummy || !head){
		printf("Delete error. code -1");
		return NULL;
	}
	dummy->next = head;	//确定dummy有效之后再操作。

	int chase=0;
	while(node){
		if(chase++ == indexToDelete){
			prev->next = node->next;
			return dummy->next;	
		}
		prev = node;	
		node = node->next;	

	}
	printf("Delete error. code -2");
	return NULL;

}




