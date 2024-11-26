#include <stdio.h>
#include <stdlib.h>

#include "sqlist.h"


#if 0
int main(){
	
	lineaSt* plin = 0;
	lineaSt* plin2 = 0;

	plin = lineaCreat();
	lineaLocalCreat(&pip3 install ansys-mapdl-coreplin2);
	printf("sizeof %lld address:%p\n",sizeof(*plin),plin);
	printf("sizeof %lld address:%p\n",sizeof(*plin2),plin2);
	printf("now last:%d\n",plin->last);

	lineaPrint(plin);
	printf("\n\n\n\n");
	lineaPrint(plin2);
	printf("\n\n\n\n");



//	for (int i=0;i<DATASIZE;i++)
//		plin->data[i] = i;
//	lineaPrint(plin);

	return 0;
}
#else
int main(){

	printf("RUNING\n");
	lineaSt* linp;
	lineaLocalCreat(&linp);

	if( lineaIsEmpty(linp )){
		printf("is empty now.\n");
	}

	printf("now lenth:%d \n",lineaLenth(linp) );
	int inss[] = {21,31,41,51,61,71};

	for(int i=0;i<16;i++){
		lineaAppend(linp,&i);	
	}

	for(int i=0;i<linp->last+10;i++){
		printf("%d\t",linp->data[i]);
	}
	printf("now last:%d",linp->last);
	for(int i=0;i<sizeof(inss)/sizeof(*inss);i++){
		lineaInsert(linp,0,inss+i);
		if(0){
			fprintf(stderr,"insert error.\n");
			exit(0);

		}else{
			printf("insert %d to index %d success.\n",*inss+i,i+5);
		}

	}
	printf("\n\n");
	for(int i=0;i<linp->last+10;i++){
		printf("%d\t",linp->data[i]);

	}
	printf("now last:%d",linp->last);
	printf("test delete--------\n");
	lineaDelete(linp,3);
	lineaPrint(linp);
	printf("now last:%d\n",linp->last);

	printf("test lenth---------\n");
	printf("now lenth:%d \n",lineaLenth(linp) );
	return 0;
}






#endif
