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















