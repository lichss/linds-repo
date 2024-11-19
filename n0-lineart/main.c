#include <stdio.h>
#include <stdlib.h>

#include "sqlist.h"


#if 0
int main(){
	
	lineaSt* plin = 0;
	lineaSt* plin2 = 0;

	plin = lineaCreat();
	lineaLocalCreat(&plin2);
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

	for(int i=0;i<16;i++){
		lineaAppend(linp,&i);	
	}
	int ins = 99;
	lineaInsert(linp,5,&ins);
	for(int i=0;i<linp->last+10;i++){
		printf("%d\t",linp->data[i]);

	}
	return 0;
}






#endif
