#include <stdio.h>
#include "linked.h"


int main(){

	printf("aaaa\n");

	linkedList* node1 = linkedCreat();
	linkedList* node2 = linkedCreat();
	linkedList* node3 = linkedCreat();
	linkedList* node4 = linkedCreat();

	
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;


	int valueA[] = {3,5,7,9,11,14,};
	linkedInitset(node1,valueA,
			sizeof(valueA)/sizeof(*valueA) );

	linkedPrint(node1);	

	return 0;
}
