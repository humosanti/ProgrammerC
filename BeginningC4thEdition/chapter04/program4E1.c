/* Program 4E1
 *
 * Written by Humberto Molinares
 * Copyright 2018
 *
 *
 */
/* Write a program than will generate a multiplication table of a size entered
 * by the user. A table a size 4, for instance, would have four row and four
 * columns, the rows and columns would be labeled from 1 to 4. Each cell in
 * the table will containt the product of the corresponding row and column
 * numbers, so the value in the position corresponding to the third row and 
 * the fourth column would containt 12
 *
 *


	1	2	3	4


	2	4	6	8
	 

	3	6	9	12


	4	8	12	16
 *
 * 
 *
 * 
 */
#include<stdio.h>

int main(void)
{
	int i=1;
	int j=1;
	int number=0;

	printf("Multiplication table. Enter an number and press Intro:");
	scanf(" %d",&number);
	++number;

	do
	{ 
		printf("\n\n\n");
		do
		{
			printf("\t%d",i*j);
			++j;
		} while(j<number);
		j=1;
		++i;
	} while(i<number);
	printf("\n\n\n");
	return 0;
}
