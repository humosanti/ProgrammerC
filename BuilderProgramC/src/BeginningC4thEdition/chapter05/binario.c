/* Program get_Binary
 *
 * Written by Humberto Molinares
 * Copyright 2018
 *
 *
 *
 * */
#include<stdio.h>

void getBinary(int n);

int  main(void)
{
	int value=0;
	printf("\nDevuelveme un binario de este numero:");
	scanf(" %d",&value);
	printf("\nEste es tu binario:"); 
	getBinary(value);
	printf("\n"); 
	return 0;
}

void getBinary(int n)
{
	if(n!=0)
	{	
		getBinary(n/2);
		printf("%d",n%2);
	}
	else
	{
		printf("%d",0);
	}
}
