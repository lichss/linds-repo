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

	linkedList* node_x = linkedCreat();
	linkedList* node_y = linkedCreat();
	
	node_x->value = 99;
	node_y->value = 19;
	linkedInsertR(node1,node_y,0);
	linkedInsertR(node_y,node_x,2);
	linkedPrint(node_y);	

	
	//linkedDelete(node_y,4);
//	node_y =	linkedDeleteHead(node_y);
//	linkedPrint(node_y);	

	if(1){
		printf("------------------test order insert\n");

		int valueB[] = {2,22,222,2222,22222};
		linkedOrderInsert(node_y,1,valueB,3);
		linkedPrint(node_y);
	}
	linkedDestruction(node_y);
	return 0;
}




