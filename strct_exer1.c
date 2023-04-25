#include <stdio.h>

#ifndef USER_COM_ENA
	#define USER_COM_ENA
#endif

#include "exer_com.h"

int main(int argv, char *argc[])
{
	ST_EXER	st_val;
	ST_EXER *st_val_p = &st_val;

	st_val.from = 1;
	st_val.to = 2;
	char msg[30] = {'G','o','o','d',' ','m','o','r','n','i','n','g','!'};

	printf("*** Init ****\n");

	printf("struct from=%d\n", st_val_p->from);
	printf("struct to=%d\n", st_val.to);
	
	printf("struct msg=");
	for(int i = 0; msg[i-1] != '!'; i++){
		st_val.msg[i] = msg[i];
		printf("%c", st_val_p->msg[i]);
	}
	printf("\n");

	st_val.from = 'A';
	st_val_p->to = 'B';

	char msg2[30] = {'T','h','i','s',' ','i','s',' ','a',' ','p','e','n','!'};

	printf("struct from=%c\n", st_val_p->from);
	printf("struct to=%c\n", st_val.to);
	
	printf("struct msg=");
	for(int i = 0; msg2[i-1] != '!'; i++){
		st_val.msg[i] = msg2[i];
		printf("%c", st_val_p->msg[i]);
	}
	printf("\n");

	return 0;
}
