/* Progran Traversing the binary
 *
 * Written by Humberto Molinares
 * Copyright 2018
 *
 *
 *
 * */
#include<stdio.h>

int main(void)
{
	unsigned int n=0;
	n=15;
	printf("Valor a recorrer a bit:%d\n",n);
	char *r=(char *)&n; 
	int i=0;
	//do
	//{
		//r[i]=0;
		printf("%c",*(r));
		//i++;
	//} while(i<32);
	printf("\n");
}
