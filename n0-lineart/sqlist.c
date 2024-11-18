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

int lineaPrint(lineaSt* linea){

	for(int i=0;i<DATASIZE;i++){
			printf("%d\t",linea->data[i]);
	}
	return 0;
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
