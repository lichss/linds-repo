#ifndef __SQLIST_H__
#define __SQLIST_H__


#define DATASIZE 512
typedef int Dtype;


typedef struct{

	Dtype data[DATASIZE];
	int last;

}lineaSt;

void* lineaCreat();
void lineaLocalCreat(lineaSt**);
void* lineaDestruc(lineaSt*);

int lineaPrint(lineaSt*);
int lineaAppend(lineaSt* linea,Dtype* data);
int lineaInsert(lineaSt* linea,int index,Dtype* data);
int lineaDelete(lineaSt* linea,int index);
int lineaFind(lineaSt* linea,Dtype* data);
int lineaIsEmpty(lineaSt* linea);

int lineaClean(lineaSt*);
int lineaLenth(lineaSt*);


#endif
