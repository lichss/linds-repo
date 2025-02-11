#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdlib.h>
#include <stdio.h>
#include "llist.h"

typedef LinkedList Queue;

Queue* queueCreat(int initsize);

int queueEn(Queue* handle,const void* data);

int queueDe(Queue* handle,void* data);

int queueEmpty(Queue* handle);


#endif