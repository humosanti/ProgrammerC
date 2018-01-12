/* Program 5E1
*
* Written by Humberto Molinares
* Copyright 2018
*
*
*
*/
/* Writte a progran that will read five values of type double from the
* keyboard and store them in an array. Calculate the reciprocal of each value
* (the reciprocal value x is 1.0/x) and store it in a separate array. Output
* the values the reciprocals, and calculate and output the sum of the
* reciprocals.
*/
#include<stdio.h>

int main(int argc, char **argv)
{
	int i=0; /* Iterator of record */
	double value=0.0f; /* keyboard enter data */
	double data[5]; /* Array of data */
	double reci[5]; /* Array of reciprocal 1.0/x */
	double sum=0.0f; /* Sum reciprocal */
	do
	{
		printf("Enter %d value of 5:",i);
		scanf(" %lf",&value); /* Read data from keyboard */
		data[i]=value; /* insert data in array data */
		reci[i]=1.0/value;
		i++;
	} while(i<5);
	printf("\n\nList data Array: ");
	i=0;
	do
	{ /* Outpu screen list elements in the array Data */
        	printf("\nArray pos[%d] Reciprocal content:{%.2lf}",i,reci[i]);	
		sum+=reci[i];
        	i++;
	} while(i<5);
	printf("\nSumatoria de reciprocal:%.2lf\n",sum);
	return 0;
}
