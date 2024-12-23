#ifndef SQUEUE_H__
#define SQUEUE_H__

#include <stdlib.h>
#include <stdio.h>

typedef int datatype;
#define MAXSIZE 4
typedef struct Queue{

    datatype data[MAXSIZE];
    int head,tail;

}Queue;


Queue* queueCreat();

int queueFull();
int queueEmpty(Queue* handle);
int queueEn(Queue* handle,datatype* data);

int queueDe(Queue* handel, datatype* data);


#endif