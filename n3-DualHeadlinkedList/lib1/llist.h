#ifndef __LLIST_H
#define __LLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INSERT_MODE_FORWARD 0
#define INSERT_MODE_BACKWARD 1

typedef int linkedP(const void*);
typedef int linkedCMP_(const void* var1, const void* var2);

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

int linkedInsert(LinkedList* handle,const void* data,int mode);

int linkedPrint(LinkedList* handle,linkedP* callback);
void* linkedFind(LinkedList* handle, const void* key, linkedCMP_* callback);
void linkedDelete(LinkedList* handle,const void* key,linkedCMP_* callback,void* data);
void linkedFetch();
int linkedDestruct();

#endif
