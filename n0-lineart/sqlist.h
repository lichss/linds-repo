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
int lineaInsert(lineaSt* linea,int index,Dtype* data);
int lineaDelete(lineaSt* linea,int index,Dtype* data);
int lineaFind(lineaSt* linea,Dtype* data);
int lineaIsempty(lineaSt* linea);

int lineaClean(lineaSt*);
int lineaLenth(lineaSt*);


#endif