#include <stdio.h>
#include "linked.h"


int main(){

	printf("this is main1.c\n");

	linkedList* node1 = linkedCreat();
	linkedList* node2 = linkedCreat();
	linkedList* node3 = linkedCreat();
	linkedList* node4 = linkedCreat();

	
	node1->next = node2;
	node1->value = 2;
	node2->next = node3;
	node2->value = 4;
	node3->next = node4;
	node3->value = 6;
	node4->next = NULL;
	node4->value = 8;

	
	int valueA[] = {3,88,2,44,9,13,9,};
	for(int i=0;i<sizeof(valueA)/sizeof(*valueA)  ;i++){
		linkedOrderInsert(node1,valueA+i);	
	}
	linkedPrint(node1);

	return 0;
}




