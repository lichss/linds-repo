#include <stdio.h>
#include <stdlib.h>

#include "nhlist.h"   //我发现真不能用<> 不然它真够吧给你报错




int listPrint(listNode* head){

	listNode* node = head;

	int i=0;
	while(node){
		printf("--%d node\n",i++);
		printf("id:%d\tname:%s\tdata1:%d\tdata2:%d\n",
				node->data.id,node->data.name,node->data.d1,node->data.d2);

	}
	


	return 0;
}
