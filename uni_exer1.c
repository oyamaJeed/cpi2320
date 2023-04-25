#include <stdio.h>

#include "user_com.h"

int main(int argv, char *argc[])
{
	UNI_EXER	uni_val;	
	UNI_EXER	*uni_val_p = &uni_val;
	
	uni_val_p.exer.from = 'C';
	uni_val_p.exer.to = 'D';

	char msg[30] = {'G','o','o','d',' ','m','o','r','n','i','n','g','!'};

	printf("*** Init ****\n");

	printf("uni st from=%c\n", uni_val.exer.from);
	printf("uni st to=%c\n", uni_val.exer.to);
	printf("struct msg=");
	for(int i = 0; msg[i-1] != '!'; i++){
		uni_val.exer.msg[i] = msg[i];
		printf("%c", st_val_p->exer.msg[i]);
	}
	/*printf("\n");
	

	printf("*** After ****\n");

	printf("union long=%ld\n", uni_val_p->l_mnb);
	for(int i=0; i<4; i++)	{
		printf("union sary c_ary=0x%02x\n", uni_val_p->sary.c_ary[i]);
	}

	printf("COM_VALUE=%d\n", COM_VALUE);
	*/
	return 0;
}
