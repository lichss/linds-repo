#include "llist.h"


LinkedList* linkedCreat(int size){

	LinkedList* newHead;
	newHead = malloc(sizeof(*newHead));
	
	newHead->head.data = NULL;
	newHead->size = size;
	newHead->head.next = &newHead->head;
	newHead->head.prev = &newHead->head;

	return newHead;
}


int linkedInsert(LinkedList* LL,const void* data,int mode){

	linkNode* newnode = NULL;
	newnode = malloc(sizeof(*newnode));
	if(!newnode)
		return -1;
	newnode->data = malloc(LL->size);
	memcpy(newnode->data,data,LL->size);

	if(mode == INSERT_MODE_FORWARD){
		newnode->next = LL->head.next;
		newnode->prev = &LL->head;
	}
	else if(mode == INSERT_MODE_BACKWARD){
		newnode->next = &LL->head;
		newnode->prev = LL->head.prev;
	}else{

		return -3;
	}
	newnode->next->prev = newnode;
	newnode->prev->next = newnode;
	return 0;
}

int linkedPrint(LinkedList* LL,int (*printFp)(void*) ){
	linkNode* node = LL->head.next;
	while(node!=&LL->head){
		printFp(node);
		node = node->next;
	}
	printf("\n");

	return 0;
}
int linkedDestruct(LinkedList* LL){

	linkNode* nn;
	for(linkNode* cur = LL->head.next;
				cur != &LL->head;
				){
		
		nn = cur->next;
		free(cur);
		cur = nn;
	}
	free(&LL->head);
	free(LL);

	return 0;
}