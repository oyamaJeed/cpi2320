#include <stdio.h>

#ifndef USER_COM_ENA
	#define USER_COM_ENA
#endif

#include "exer_com.h"

int main(int argv, char *argc[])
{
	ST_EXER st_val = {'1','2',"Good morning!"};
	ST_EXER *st_val_p = &st_val;

	printf("*** Init ****\n");

	printf("struct from=%c\n", st_val_p->from);
	printf("struct to=%c\n", st_val.to);
	printf("struct msg=");
	for(int i = 0; st_val_p->msg[i] != NULL; i++){
		printf("%c", st_val_p->msg[i]);
	}
	printf("\n");
	
	ST_EXER st_val2 = {'A','B',"Good afternoon!"};
	ST_EXER *st_val2_p = &st_val2;

	printf("struct from=%c\n", st_val2_p->from);
	printf("struct to=%c\n", st_val2.to);
	printf("struct msg=");
	for(int i = 0; st_val2_p->msg[i] != NULL; i++){
		printf("%c", st_val2_p->msg[i]);
	}
	printf("\n");

	return 0;
}
