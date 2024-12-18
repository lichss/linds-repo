#include "llist.h"


static linkNode* find_(LinkedList* handle,const void* key, linkedCMP_ * callback){
	// callback should return false, if value same,else return true
	
	linkNode* nodep;
	nodep = handle->head.next;
	while(nodep!=&handle->head){
		if(!callback(key,nodep->data))
			return nodep;
		nodep = nodep->next;
	}
	
	return NULL;

}

LinkedList* linkedCreat(int size){

	LinkedList* newHead;
	newHead = malloc(sizeof(*newHead));
	
	newHead->size = size;
	newHead->head.next = &newHead->head;
	newHead->head.prev = &newHead->head;

	return newHead;
}


int linkedInsert(LinkedList* LL,const void* data,int mode){

	linkNode* newnode = NULL;
	newnode = malloc(sizeof(*newnode)+LL->size);
	if(!newnode)
		return -1;
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

int linkedPrint(LinkedList* LL, linkedP* callback ){
	linkNode* node = LL->head.next;
	while(node!=&LL->head){
		callback(node->data);
		node = node->next;
	}
	printf("\n");

	return 0;
}
void* linkedFind(LinkedList* handle, const void* key, linkedCMP_* callback){

	linkNode* node = handle->head.next;
	
	node = find_(handle,key,callback);
	return node;	
}


void linkedDelete(LinkedList* handle,const void* key,linkedCMP_* callback,void* data){
	linkNode* nodeTodel =  find_(handle,key,callback);
	
	if(nodeTodel == NULL)
		return;
	nodeTodel->prev->next = nodeTodel->next;
	nodeTodel->next->prev = nodeTodel->prev;

	free(nodeTodel);

	return;
}


void linkedFetch(LinkedList* handle,const void* key,linkedCMP_* callback,void* datap){

	if(!datap)
		printf("invalid pointrt\n");

	linkNode* nodeTofetch = find_(handle,key,callback);
	if(!nodeTofetch){
		printf("find no\n");
		return;
	}
	nodeTofetch->prev->next = nodeTofetch->next;
	nodeTofetch->next->prev = nodeTofetch->prev;
	printf("ffffff\n");

	if(datap){
		memcpy(datap,nodeTofetch->data,handle->size);
		printf("cpy donw\n");
	}else
		printf("no cp\n");


	
	free(nodeTofetch);
	return;
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