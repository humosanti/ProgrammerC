/* Program 4E1A
 *
 * Written by Humberto Molinares
 * Copyright 2018
 *
 *
 */
#include<stdio.h>

int main(void)
{
	for(int i=1,j=2;i<5;i++,j=j+2,printf("\n%5d",i*j));
	return 0;
}
