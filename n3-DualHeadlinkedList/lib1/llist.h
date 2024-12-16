#ifndef __LLIST_H
#define __LLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INSERT_MODE_FORWARD 0
#define INSERT_MODE_BACKWARD 1


typedef struct linkNode{

	void* data; 
	struct linkNode* prev;
	struct linkNode* next;

} linkNode;

typedef struct {

	int size;
	struct linkNode head;

} LinkedList;

LinkedList* linkedCreat(int size);

int linkedInsert(LinkedList* LL,const void* data,int mode);

int linkedPrint(LinkedList* LL,int (*printFp)(void*) );
void linkedFind();
void linkedDelte();
void linkedFetch();
int linkedDestruct();

#endif
