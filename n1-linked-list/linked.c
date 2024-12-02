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

















