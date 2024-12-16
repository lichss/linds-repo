#ifndef __NHLIST_H
#define __NHLIST_H


#define NAMESIZE 32

typedef struct {

	int id;
	char name[NAMESIZE];
	int d1;
	int d2;



} dat_st;

typedef struct listNode{

	struct listNode* next;
	dat_st data;


} listNode;

int listInsert(listNode* head);
int listPrint();
int listDelete();
int listFind();



#endif
