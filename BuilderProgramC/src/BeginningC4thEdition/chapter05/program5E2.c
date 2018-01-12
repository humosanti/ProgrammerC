/* Program 5E2
*
* Written by Humberto Molinares
* Copyright 2018
*
*
*
*/
/* Define an array, Data, with 100 elements of type double. Write a loop
* that will store the sequence of values in corresponding elements of the
* array
* 1/(2*3*4) 1/(4*5*6) 1/(6*7*8) ... up 1/(200*201*202)
* Write other loop that will calculate the following
* data[0]-data[1]+data[2]-data[3]+...-data[99]
* Multiply the result of this for 4.0, add 3.0, and output the final
* result. Do you recognize the value that you get?
*/
#include<stdio.h>

int main(void)
{
	int i=0;
	double a_rray[5];
	do {
		a_rray[i]=5.6;
		i++;} while(i<6);
    return 0;
}
