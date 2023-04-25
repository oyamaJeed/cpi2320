#include <stdio.h>

#include "exer_com.h"

int main(int argv, char *argc[])
{
	UNI_EXER uni_val = {'C','D',"Good evening!\n"};
	UNI_EXER *uni_val_p = &uni_val;

	printf("*** Init ****\n");

	printf("uni st from=%c\n", uni_val_p->exer.from);
	printf("uni st to=%c\n", uni_val.exer.to);
	printf("uni st msg=");
	for(int i = 0; uni_val_p->exer.msg[i] != NULL; i++){
		printf("%c", uni_val_p->exer.msg[i]);
	}

	UNI_EXER uni_val2 = {'E','F',"This is an apple!\n"};
	UNI_EXER *uni_val2_p = &uni_val2;

	printf("*** Modify ****\n");
	printf("uni st from=%c\n", uni_val2_p->sary.c_ary[0]);
	printf("uni st to=%c\n", uni_val2_p->sary.c_ary[1]);
	printf("uni st msg=");
	for(int i = 2; uni_val2_p->sary.c_ary[i] != NULL; i++){
		printf("%c", uni_val2_p->sary.c_ary[i]);
	}

	return 0;
}
