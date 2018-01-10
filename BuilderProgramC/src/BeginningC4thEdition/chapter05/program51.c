/* Program 5.1 Averaging then numbers without storing the numbers
*
* Written by Humberto Molinares
* Copyright 2018
*
*
*/
#include<stdio.h>

int main(void)
{
	int number = 0; /* Stores a number */
	int count = 10; /* Number of values to be read */
	long sum = 0L; /* Average of the numbers */
	float average = 0.0f; /* Average of the numbers */

	/* Read the ten numbers to be averaged */
	for(int i = 0; i < count; i++)
	{
		printf("Enter grade: "); /* Read a number */
		scanf(" %d", &number); /* Add it to sum */
		sum += number;
	}

	average = (float)sum/count; /* Calculate the average */

	printf("\nAverage of the ten numbers entered is: %f\n", average);

	return 0;
}
