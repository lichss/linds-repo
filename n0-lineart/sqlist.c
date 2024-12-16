#include <stdlib.h>
#include <stdio.h>
#include "sqlist.h"


void* lineaCreat(){
	lineaSt* linea = 0;
	int ByteNeed = sizeof(Dtype) * DATASIZE;
	ByteNeed = sizeof(*linea);

	linea = malloc(sizeof(*linea));
	if(linea){
		printf("%d Byte allocate to %p\n",ByteNeed,linea);
		linea->last = 0;
	}
	else
		linea->last = -1;
	return linea; 
}

int lineaAppend(lineaSt* linea,Dtype* data){

	if(linea->last < 0 || linea->last >= DATASIZE)
		return -1;

	linea->data[linea->last] = *data;	
	linea->last++;
	return 0;
}
int lineaInsert(lineaSt* linea,int index,Dtype* data){

	if(index > DATASIZE)
		return -1;
	if(linea->last >= DATASIZE-1)
		return -1;
	
//	for(int i=linea->last-1; i>index; i--){
//		linea->data[i] = linea->data[i-1];
//	}
	for(int i=linea->last-1;i>=index;i--){
		linea->data[i+1] = linea->data[i];
		
	}
	linea->data[index] = *data;
	linea->last++;
	return 0;

}
int lineaPrint(lineaSt* linea){

	for(int i=0;i<linea->last;i++){
			printf("%d\t",linea->data[i]);
	}
	printf("\n");
	return 0;
}

void lineaLocalCreat(lineaSt** ptr){

	*ptr = malloc(sizeof(lineaSt));
	if(! *ptr)
		printf("fail malloc.\n");
	else
		(*ptr)->last = 0;

	return;
}

int lineaDelete(lineaSt* linea,int index){

	if(index>=linea->last || index <0){
		return -1;
		// means out of index;
	}

	for (int i=index;i<linea->last;i++){
		linea->data[i] =  linea->data[i+1];
	}
	/*
	 * 这个地方其实是有隐患的。有一块申请的（在极端情况下可能是			未申请的）内存会被前移一位。不是很好，当然后续应该会被覆			盖，所以我暂时觉得没问题。
	 */
	linea->last--;
	return 0;
}

int lineaLenth(lineaSt* linea){

	return linea->last ;

}

int lineaClear(lineaSt* linea){

	linea->last = 0;
	return 0;
}

int lineaIsEmpty(lineaSt* linea){

	return (linea->last == 0);

}
#if 0
void lineaLocalCreat(lineaSt**);

void* lineaDestruc(lineaSt*);

int lineaInsert(lineaSt* linea,int index,Dtype* data);
int lineaDelete(lineaSt* linea,int index,Dtype* data);
int lineaFind(lineaSt* linea,Dtype* data);
int lineaIsempty(lineaSt* linea);

int lineaClean(lineaSt*);
int lineaLenth(lineaSt*);
#endif
