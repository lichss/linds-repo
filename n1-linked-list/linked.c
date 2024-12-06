#include <stdio.h>
#include <stdlib.h>

#include "linked.h"

linkedList* linkedCreat(){

	int n = sizeof(linkedList);
	printf("sizeof(linkedList) = %d\n",n);
	
	linkedList* creatPtr = 0;
	creatPtr = malloc(n);

	if(creatPtr){
		creatPtr->next = NULL;
		return creatPtr;
	}
	else{
		printf("creating err.\n");
		return 0;
	}
}


int linkedCreatLocal(linkedList** creatPtr){




	return 0;
}
// 这tm能有甚么用
// 而且，为啥celery你的返回值和函数名的逻辑正好是反着的？？

int linkedIsEmpty(linkedList* head){
	if(!head)
		return -1;
	if(head->next)
		return 0;
	return 1;
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

int linkedOrderInsert(linkedList* head,Datatype* valueToInsert){
	
	if(!head)
		return -1;

	linkedList dummy;
	dummy.next = head;
	
	linkedList* prev = &dummy;
	linkedList* node = head;
	linkedList* newnodeP;

	while(node){
		if(node->value > *valueToInsert){
			newnodeP = linkedCreat();
			newnodeP->value = *valueToInsert;
			newnodeP->next = node;
			prev->next = newnodeP;

			return 0;
		}
		prev = node;	
		node = node->next;
	}

	newnodeP = linkedCreat();
	newnodeP->value = *valueToInsert;
	newnodeP->next = NULL;
	prev->next = newnodeP;


	return 0;

}
//测。原来order是大小顺序。好好好。我现在改。
//现在还有个小小的问题 index 对不上。
int linkedOrderInsertX(linkedList* head,int index ,Datatype valueArray[],int size){

	if(!head|| index<0)
		return -1;
	linkedList dummy;
	dummy.next = head;

	linkedList* node = head;
	linkedList* prev = &dummy;

	int chase = 0;
	while(chase!=index){
		prev = node;
		node = node->next;	
		chase++;
	}
	linkedList* rear = node;
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

		printf("node%d -- %d\n",count,node->value);
		node = node->next;
		count++;
	}
	return count;
}
int linkedInsertR(linkedList* head,linkedList* nodeToInsert,int index){

	if(!head || index < 0)
		return -1;
	
	linkedList dummy;
	dummy.next = head;
	linkedList* node = &dummy;
	int chase = 0;

	while(node){
		if(chase == index){
			nodeToInsert->next = node->next;
			node->next = nodeToInsert;
			return 0;
		}
		chase++;
		node = node->next;

	}

	return -2;
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

//这个应该是更好的版本。D表示dummy 虚拟头节点
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

void linkedDestruction(linkedList* head){

	linkedList* prev = NULL;
	for(linkedList* node = head;node;){
		free(prev);
		prev = node;
		node = node->next;	

	}
}


