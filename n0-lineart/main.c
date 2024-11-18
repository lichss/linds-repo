#include <stdio.h>
#include <stdlib.h>

#include "sqlist.h"

int main(){
	
	lineaSt* plin = 0;
	plin = lineaCreat();

	printf("sizeof %lld\n",sizeof(plin));

	printf("now last:%d\n",plin->last);
	lineaPrint(plin);
	return 0;
}
